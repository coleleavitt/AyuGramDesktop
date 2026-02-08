/****************************************************************************
** Meta object code from reading C++ file 'connection_abstract.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SourceFiles/mtproto/connection_abstract.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection_abstract.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t {};
} // unnamed namespace

template <> constexpr inline auto MTP::details::AbstractConnection::qt_create_metaobjectdata<qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MTP::details::AbstractConnection",
        "receivedData",
        "",
        "receivedSome",
        "error",
        "errorCodebool",
        "connected",
        "disconnected",
        "syncTimeRequest"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'receivedData'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'receivedSome'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'error'
        QtMocHelpers::SignalData<void(qint32)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'connected'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disconnected'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'syncTimeRequest'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractConnection, qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MTP::details::AbstractConnection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>.metaTypes,
    nullptr
} };

void MTP::details::AbstractConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractConnection *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->receivedData(); break;
        case 1: _t->receivedSome(); break;
        case 2: _t->error((*reinterpret_cast< std::add_pointer_t<qint32>>(_a[1]))); break;
        case 3: _t->connected(); break;
        case 4: _t->disconnected(); break;
        case 5: _t->syncTimeRequest(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)()>(_a, &AbstractConnection::receivedData, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)()>(_a, &AbstractConnection::receivedSome, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)(qint32 )>(_a, &AbstractConnection::error, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)()>(_a, &AbstractConnection::connected, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)()>(_a, &AbstractConnection::disconnected, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractConnection::*)()>(_a, &AbstractConnection::syncTimeRequest, 5))
            return;
    }
}

const QMetaObject *MTP::details::AbstractConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MTP::details::AbstractConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MTP7details18AbstractConnectionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MTP::details::AbstractConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MTP::details::AbstractConnection::receivedData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MTP::details::AbstractConnection::receivedSome()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MTP::details::AbstractConnection::error(qint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MTP::details::AbstractConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MTP::details::AbstractConnection::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MTP::details::AbstractConnection::syncTimeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
