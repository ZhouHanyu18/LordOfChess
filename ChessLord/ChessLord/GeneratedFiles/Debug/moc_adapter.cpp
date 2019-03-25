/****************************************************************************
** Meta object code from reading C++ file 'adapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../adapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CAdapter_t {
    QByteArrayData data[8];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAdapter_t qt_meta_stringdata_CAdapter = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CAdapter"
QT_MOC_LITERAL(1, 9, 14), // "timeCntChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "receive"
QT_MOC_LITERAL(4, 33, 3), // "str"
QT_MOC_LITERAL(5, 37, 4), // "send"
QT_MOC_LITERAL(6, 42, 9), // "getButton"
QT_MOC_LITERAL(7, 52, 7) // "timenow"

    },
    "CAdapter\0timeCntChanged\0\0receive\0str\0"
    "send\0getButton\0timenow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAdapter *_t = static_cast<CAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeCntChanged(); break;
        case 1: _t->receive((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->send(); break;
        case 3: _t->getButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAdapter::timeCntChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CAdapter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAdapter::receive)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CAdapter *_t = static_cast<CAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->read(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CAdapter *_t = static_cast<CAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->write(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CAdapter.data,
      qt_meta_data_CAdapter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CAdapter.stringdata0))
        return static_cast<void*>(const_cast< CAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int CAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CAdapter::timeCntChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CAdapter::receive(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
