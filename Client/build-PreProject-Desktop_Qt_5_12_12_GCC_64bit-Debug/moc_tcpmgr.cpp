/****************************************************************************
** Meta object code from reading C++ file 'tcpmgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../docotor/tcpmgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
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
    QByteArrayData data[18];
    char stringdata0[246];
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
QT_MOC_LITERAL(10, 99, 31), // "sig_edit_doctor_selfintr_failed"
QT_MOC_LITERAL(11, 131, 11), // "dataUpdated"
QT_MOC_LITERAL(12, 143, 12), // "apperSuccess"
QT_MOC_LITERAL(13, 156, 19), // "sig_make_first_list"
QT_MOC_LITERAL(14, 176, 26), // "QVector<QVector<QString> >"
QT_MOC_LITERAL(15, 203, 16), // "slot_tcp_connect"
QT_MOC_LITERAL(16, 220, 10), // "ServerInfo"
QT_MOC_LITERAL(17, 231, 14) // "slot_send_data"

    },
    "TcpMgr\0sig_con_success\0\0bsuccess\0"
    "sig_send_data\0ReqId\0reqId\0data\0"
    "sig_login_failed\0sig_swich_chatdlg\0"
    "sig_edit_doctor_selfintr_failed\0"
    "dataUpdated\0apperSuccess\0sig_make_first_list\0"
    "QVector<QVector<QString> >\0slot_tcp_connect\0"
    "ServerInfo\0slot_send_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpMgr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       8,    1,   72,    2, 0x06 /* Public */,
       9,    0,   75,    2, 0x06 /* Public */,
      10,    0,   76,    2, 0x06 /* Public */,
      11,    0,   77,    2, 0x06 /* Public */,
      12,    0,   78,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   82,    2, 0x0a /* Public */,
      17,    2,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,    2,
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
        case 4: _t->sig_edit_doctor_selfintr_failed(); break;
        case 5: _t->dataUpdated(); break;
        case 6: _t->apperSuccess(); break;
        case 7: _t->sig_make_first_list((*reinterpret_cast< QVector<QVector<QString> >(*)>(_a[1]))); break;
        case 8: _t->slot_tcp_connect((*reinterpret_cast< ServerInfo(*)>(_a[1]))); break;
        case 9: _t->slot_send_data((*reinterpret_cast< ReqId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<QString> > >(); break;
            }
            break;
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
        {
            using _t = void (TcpMgr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_edit_doctor_selfintr_failed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::dataUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::apperSuccess)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TcpMgr::*)(QVector<QVector<QString>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpMgr::sig_make_first_list)) {
                *result = 7;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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

// SIGNAL 4
void TcpMgr::sig_edit_doctor_selfintr_failed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TcpMgr::dataUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TcpMgr::apperSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TcpMgr::sig_make_first_list(QVector<QVector<QString>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
