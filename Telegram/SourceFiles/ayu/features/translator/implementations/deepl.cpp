// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2025
#include "deepl.h"

#include <memory>
#include <QtCore/QJsonArray>
#include <QtCore/QJsonDocument>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonValue>
#include <QtCore/QPointer>
#include <QtCore/QTimer>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtCore/QUrl>

#include "ayu/features/translator/html_parser.h"

namespace Ayu::Translator {

namespace {

constexpr auto kDeepLUrl = "https://www2.deepl.com/jsonrpc";

QString mapToDeepLLang(const QString &lang) {
	return lang.toUpper();
}

} // namespace

DeepLTranslator &DeepLTranslator::instance() {
	static DeepLTranslator inst;
	return inst;
}

DeepLTranslator::DeepLTranslator(QObject *parent)
	: MultiThreadTranslator(parent) {
}

QSet<QString> DeepLTranslator::supportedLanguages() const {
	static const QSet<QString> languages = {
		QStringLiteral("bg"), QStringLiteral("cs"), QStringLiteral("da"), QStringLiteral("de"),
		QStringLiteral("el"), QStringLiteral("en"), QStringLiteral("es"), QStringLiteral("et"),
		QStringLiteral("fi"), QStringLiteral("fr"), QStringLiteral("hu"), QStringLiteral("id"),
		QStringLiteral("it"), QStringLiteral("ja"), QStringLiteral("ko"), QStringLiteral("lt"),
		QStringLiteral("lv"), QStringLiteral("nb"), QStringLiteral("nl"), QStringLiteral("pl"),
		QStringLiteral("pt"), QStringLiteral("ro"), QStringLiteral("ru"), QStringLiteral("sk"),
		QStringLiteral("sl"), QStringLiteral("sv"), QStringLiteral("tr"), QStringLiteral("uk"),
		QStringLiteral("zh")
	};
	return languages;
}

QPointer<QNetworkReply> DeepLTranslator::startSingleTranslation(
	const MultiThreadArgs &args
) {
	const auto &text = args.parsedData.text;
	const auto &fromLang = args.parsedData.fromLang;
	const auto &toLang = args.parsedData.toLang;
	const auto onSuccess = args.onSuccess;
	const auto onFail = args.onFail;

	if (text.empty() || toLang.isEmpty()) {
		if (onFail) onFail(false);
		return nullptr;
	}

	const auto sourceLang = (fromLang.trimmed().isEmpty() || fromLang == QStringLiteral("auto"))
		? QStringLiteral("auto")
		: mapToDeepLLang(fromLang.trimmed());
	const auto targetLang = mapToDeepLLang(toLang.trimmed());

	const auto textToTranslate = shouldWrapInHtml() ? Html::entitiesToHtml(text) : text.text;

	QJsonObject textObj;
	textObj.insert(QStringLiteral("text"), textToTranslate);
	textObj.insert(QStringLiteral("requestAlternatives"), 0);

	QJsonArray textsArray;
	textsArray.append(textObj);

	QJsonObject langObj;
	langObj.insert(QStringLiteral("source_lang_user_selected"), sourceLang);
	langObj.insert(QStringLiteral("target_lang"), targetLang);

	QJsonObject commonJobParams;
	commonJobParams.insert(QStringLiteral("wasSpoken"), false);
	commonJobParams.insert(QStringLiteral("transcribe_as"), QString());

	QJsonObject params;
	params.insert(QStringLiteral("texts"), textsArray);
	params.insert(QStringLiteral("splitting"), QStringLiteral("newlines"));
	params.insert(QStringLiteral("lang"), langObj);
	params.insert(QStringLiteral("commonJobParams"), commonJobParams);

	QJsonObject requestBody;
	requestBody.insert(QStringLiteral("jsonrpc"), QStringLiteral("2.0"));
	requestBody.insert(QStringLiteral("method"), QStringLiteral("LMT_handle_texts"));
	requestBody.insert(QStringLiteral("id"), 1);
	requestBody.insert(QStringLiteral("params"), params);

	const auto body = QJsonDocument(requestBody).toJson(QJsonDocument::Compact);

	QNetworkRequest req(QUrl(QString::fromLatin1(kDeepLUrl)));
	const auto userAgent = randomDesktopUserAgent();
	req.setHeader(QNetworkRequest::UserAgentHeader, userAgent);
	req.setHeader(QNetworkRequest::ContentTypeHeader, QStringLiteral("application/json"));
	req.setRawHeader(QByteArrayLiteral("Accept"), QByteArrayLiteral("application/json"));

	QPointer<QNetworkReply> reply = _nam.post(req, body);

	auto timer = new QTimer(reply);
	timer->setSingleShot(true);
	timer->setInterval(15000);
	QObject::connect(timer,
					 &QTimer::timeout,
					 reply,
					 [reply]
					 {
						 if (!reply) return;
						 if (reply->isRunning()) reply->abort();
					 });
	timer->start();

	QObject::connect(reply,
					 &QNetworkReply::finished,
					 reply,
					 [reply, onSuccess = onSuccess, onFail = onFail, timer]
					 {
						 if (!reply) return;
						 timer->stop();
						 const auto guard = std::unique_ptr<QNetworkReply, void(*)(QNetworkReply *)>(
							 reply,
							 [](QNetworkReply *r) { r->deleteLater(); });
						 if (reply->error() != QNetworkReply::NoError) {
							 if (onFail) onFail(true);
							 return;
						 }
						 const auto body = reply->readAll();
						 QJsonParseError parseError{};
						 const auto doc = QJsonDocument::fromJson(body, &parseError);
						 if (parseError.error != QJsonParseError::NoError || !doc.isObject()) {
							 if (onFail) onFail(false);
							 return;
						 }
						 const auto root = doc.object();
						 const auto resultObj = root.value(QStringLiteral("result")).toObject();
						 const auto textsArr = resultObj.value(QStringLiteral("texts")).toArray();
						 if (textsArr.isEmpty()) {
							 if (onFail) onFail(false);
							 return;
						 }
						 const auto translatedText = textsArr.at(0).toObject()
							 .value(QStringLiteral("text")).toString();
						 if (translatedText.trimmed().isEmpty()) {
							 if (onFail) onFail(false);
							 return;
						 }
						 if (onSuccess) onSuccess(shouldWrapInHtml()
							 ? Html::htmlToEntities(translatedText)
							 : TextWithEntities{translatedText});
					 });

	return reply;
}

}
