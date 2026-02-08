/****************************************************************************
** Meta object code from reading C++ file 'media_audio_loaders.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SourceFiles/media/audio/media_audio_loaders.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'media_audio_loaders.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5Media6Player7LoadersE_t {};
} // unnamed namespace

template <> constexpr inline auto Media::Player::Loaders::qt_create_metaobjectdata<qt_meta_tag_ZN5Media6Player7LoadersE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Media::Player::Loaders",
        "error",
        "",
        "AudioMsgId",
        "audio",
        "needToCheck",
        "onInit",
        "onStart",
        "positionMs",
        "onLoad",
        "onCancel"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'error'
        QtMocHelpers::SignalData<void(const AudioMsgId &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'needToCheck'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onInit'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onStart'
        QtMocHelpers::SlotData<void(const AudioMsgId &, qint64)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::LongLong, 8 },
        }}),
        // Slot 'onLoad'
        QtMocHelpers::SlotData<void(const AudioMsgId &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCancel'
        QtMocHelpers::SlotData<void(const AudioMsgId &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Loaders, qt_meta_tag_ZN5Media6Player7LoadersE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Media::Player::Loaders::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player7LoadersE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player7LoadersE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5Media6Player7LoadersE_t>.metaTypes,
    nullptr
} };

void Media::Player::Loaders::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Loaders *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 1: _t->needToCheck(); break;
        case 2: _t->onInit(); break;
        case 3: _t->onStart((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->onLoad((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        case 5: _t->onCancel((*reinterpret_cast< std::add_pointer_t<AudioMsgId>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Loaders::*)(const AudioMsgId & )>(_a, &Loaders::error, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Loaders::*)()>(_a, &Loaders::needToCheck, 1))
            return;
    }
}

const QMetaObject *Media::Player::Loaders::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Media::Player::Loaders::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5Media6Player7LoadersE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Media::Player::Loaders::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Media::Player::Loaders::error(const AudioMsgId & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Media::Player::Loaders::needToCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
