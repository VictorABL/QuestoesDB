/****************************************************************************
** Meta object code from reading C++ file 'answerframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QuestoesDB/answerframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'answerframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnswerFrame_t {
    QByteArrayData data[9];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnswerFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnswerFrame_t qt_meta_stringdata_AnswerFrame = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AnswerFrame"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 24), // "on_alternative_a_toggled"
QT_MOC_LITERAL(4, 60, 7), // "checked"
QT_MOC_LITERAL(5, 68, 24), // "on_alternative_b_toggled"
QT_MOC_LITERAL(6, 93, 24), // "on_alternative_c_toggled"
QT_MOC_LITERAL(7, 118, 24), // "on_alternative_d_toggled"
QT_MOC_LITERAL(8, 143, 24) // "on_alternative_e_toggled"

    },
    "AnswerFrame\0on_pushButton_clicked\0\0"
    "on_alternative_a_toggled\0checked\0"
    "on_alternative_b_toggled\0"
    "on_alternative_c_toggled\0"
    "on_alternative_d_toggled\0"
    "on_alternative_e_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnswerFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void AnswerFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnswerFrame *_t = static_cast<AnswerFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_alternative_a_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_alternative_b_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_alternative_c_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_alternative_d_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_alternative_e_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AnswerFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AnswerFrame.data,
      qt_meta_data_AnswerFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AnswerFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnswerFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnswerFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AnswerFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
