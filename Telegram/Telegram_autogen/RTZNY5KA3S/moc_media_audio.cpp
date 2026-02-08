/****************************************************************************
** Meta object code from reading C++ file 'media_audio.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SourceFiles/media/audio/media_audio.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'media_audio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN5Media6Player5MixerE_t {};
} // unnamed namespace

template <> constexpr inline auto Media::Player::Mixer::qt_create_metaobjectdata<qt_meta_tag_ZN5Media6Player5MixerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Media::Player::Mixer",
        "updated",
        "",
        "AudioMsgId",
        "audio",
        "stoppedOnError",
        "loaderOnStart",
        "positionMs",
        "loaderOnCancel",
        "suppressSong",
        "unsuppressSong",
        "suppressAll",
        "duration",
        "onError",
        "onStopped",
        "onUpdated"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updated'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'stoppedOnError'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'loaderOnStart'
        QtMocHelpers::SignalData<void(const AudioMsgId &, qint64)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::LongLong, 7 },
        }}),
        // Signal 'loaderOnCancel'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'suppressSong'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unsuppressSong'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'suppressAll'
        QtMocHelpers::SignalData<void(qint64)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 12 },
        }}),
        // Slot 'onError'
        QtMocHelpers::SlotData<void(const AudioMsgId &)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onStopped'
        QtMocHelpers::SlotData<void(const AudioMsgId &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onUpdated'
        QtMocHelpers::SlotData<void(const AudioMsgId &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Mixer, qt_meta_tag_ZN5Media6Player5MixerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Media::Player::Mixer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5MixerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5MixerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Media6Player5MixerE_t>.metaTypes,
    nullptr
} };

void Media::Player::Mixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Mixer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 1: _t->stoppedOnError((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 2: _t->loaderOnStart((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->loaderOnCancel((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 4: _t->suppressSong(); break;
        case 5: _t->unsuppressSong(); break;
        case 6: _t->suppressAll((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 7: _t->onError((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 8: _t->onStopped((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 9: _t->onUpdated((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)(const AudioMsgId & )>(_a, &Mixer::updated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)(const AudioMsgId & )>(_a, &Mixer::stoppedOnError, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)(const AudioMsgId & , qint64 )>(_a, &Mixer::loaderOnStart, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)(const AudioMsgId & )>(_a, &Mixer::loaderOnCancel, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)()>(_a, &Mixer::suppressSong, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)()>(_a, &Mixer::unsuppressSong, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Mixer::*)(qint64 )>(_a, &Mixer::suppressAll, 6))
            return;
    }
}

const QMetaObject *Media::Player::Mixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Media::Player::Mixer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5MixerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Media::Player::Mixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Media::Player::Mixer::updated(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Media::Player::Mixer::stoppedOnError(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Media::Player::Mixer::loaderOnStart(const AudioMsgId & _t1, qint64 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void Media::Player::Mixer::loaderOnCancel(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Media::Player::Mixer::suppressSong()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Media::Player::Mixer::unsuppressSong()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Media::Player::Mixer::suppressAll(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN5Media6Player5FaderE_t {};
} // unnamed namespace

template <> constexpr inline auto Media::Player::Fader::qt_create_metaobjectdata<qt_meta_tag_ZN5Media6Player5FaderE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Media::Player::Fader",
        "error",
        "",
        "AudioMsgId",
        "audio",
        "playPositionUpdated",
        "audioStopped",
        "needToPreload",
        "onInit",
        "onTimer",
        "onSuppressSong",
        "onUnsuppressSong",
        "onSuppressAll",
        "duration"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'error'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'playPositionUpdated'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'audioStopped'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'needToPreload'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onInit'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onTimer'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSuppressSong'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onUnsuppressSong'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onSuppressAll'
        QtMocHelpers::SlotData<void(qint64)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Fader, qt_meta_tag_ZN5Media6Player5FaderE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Media::Player::Fader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5FaderE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5FaderE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Media6Player5FaderE_t>.metaTypes,
    nullptr
} };

void Media::Player::Fader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Fader *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 1: _t->playPositionUpdated((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 2: _t->audioStopped((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 3: _t->needToPreload((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 4: _t->onInit(); break;
        case 5: _t->onTimer(); break;
        case 6: _t->onSuppressSong(); break;
        case 7: _t->onUnsuppressSong(); break;
        case 8: _t->onSuppressAll((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Fader::*)(const AudioMsgId & )>(_a, &Fader::error, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Fader::*)(const AudioMsgId & )>(_a, &Fader::playPositionUpdated, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Fader::*)(const AudioMsgId & )>(_a, &Fader::audioStopped, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Fader::*)(const AudioMsgId & )>(_a, &Fader::needToPreload, 3))
            return;
    }
}

const QMetaObject *Media::Player::Fader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Media::Player::Fader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player5FaderE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Media::Player::Fader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Media::Player::Fader::error(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Media::Player::Fader::playPositionUpdated(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Media::Player::Fader::audioStopped(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Media::Player::Fader::needToPreload(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
