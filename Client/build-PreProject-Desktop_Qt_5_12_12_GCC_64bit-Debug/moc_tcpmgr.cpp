/****************************************************************************
** Meta object code from reading C++ file 'tcpmgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PreProject/tcpmgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpmgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpMgr_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpMgr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpMgr_t qt_meta_stringdata_TcpMgr = {
    {
QT_MOC_LITERAL(0, 0, 6), // "TcpMgr"
QT_MOC_LITERAL(1, 7, 15), // "sig_con_success"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "bsuccess"
QT_MOC_LITERAL(4, 33, 13), // "sig_send_data"
QT_MOC_LITERAL(5, 47, 5), // "ReqId"
QT_MOC_LITERAL(6, 53, 5), // "reqId"
QT_MOC_LITERAL(7, 59, 4), // "data"
QT_MOC_LITERAL(8, 64, 16), // "sig_login_failed"
QT_MOC_LITERAL(9, 81, 17), // "sig_swich_chatdlg"
QT_MOC_LITERAL(10, 99, 16), // "slot_tcp_connect"
QT_MOC_LITERAL(11, 116, 10), // "ServerInfo"
QT_MOC_LITERAL(12, 127, 14) // "slot_send_data"

    },
    "TcpMgr\0sig_con_success\0\0bsuccess\0"
    "sig_send_data\0ReqId\0reqId\0data\0"
    "sig_login_failed\0sig_swich_chatdlg\0"
    "slot_tcp_connect\0ServerInfo\0slot_send_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpMgr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,
       9,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   56,    2, 0x0a /* Public */,
      12,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,

       0        // eod
};

void TcpMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpMgr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_con_success((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sig_send_data((*reinterpret_cast< ReqId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sig_login_failed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sig_swich_chatdlg(); break;
        case 4: _t->slot_tcp_connect((*reinterpret_cast< ServerInfo(*)>(_a[1]))); break;
        case 5: _t->slot_send_data((*reinterpret_cast< ReqId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpMgr::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_con_success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)(ReqId , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_send_data)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_login_failed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_swich_chatdlg)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpMgr::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TcpMgr.data,
    qt_meta_data_TcpMgr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpMgr.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<TcpMgr>"))
        return static_cast< Singleton<TcpMgr>*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<TcpMgr>"))
        return static_cast< std::enable_shared_from_this<TcpMgr>*>(this);
    return QObject::qt_metacast(_clname);
}

int TcpMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TcpMgr::sig_con_success(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpMgr::sig_send_data(ReqId _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TcpMgr::sig_login_failed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TcpMgr::sig_swich_chatdlg()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
