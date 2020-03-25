/****************************************************************************
** Meta object code from reading C++ file 'Maintenance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Code-suhyr/Maintenance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Maintenance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Maintenance_t {
    QByteArrayData data[12];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Maintenance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Maintenance_t qt_meta_stringdata_Maintenance = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Maintenance"
QT_MOC_LITERAL(1, 12, 28), // "on_AddSouvenirButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 45), // "on_AddCollegeNameComboBox_cur..."
QT_MOC_LITERAL(4, 88, 5), // "index"
QT_MOC_LITERAL(5, 94, 35), // "on_EditSouvenirNameLine_textC..."
QT_MOC_LITERAL(6, 130, 15), // "newSouvenirName"
QT_MOC_LITERAL(7, 146, 32), // "on_EditPriceSpinBox_valueChanged"
QT_MOC_LITERAL(8, 179, 4), // "cost"
QT_MOC_LITERAL(9, 184, 29), // "on_EditSouvenirButton_clicked"
QT_MOC_LITERAL(10, 214, 26), // "on_AddCancelButton_clicked"
QT_MOC_LITERAL(11, 241, 27) // "on_EditCancelButton_clicked"

    },
    "Maintenance\0on_AddSouvenirButton_clicked\0"
    "\0on_AddCollegeNameComboBox_currentIndexChanged\0"
    "index\0on_EditSouvenirNameLine_textChanged\0"
    "newSouvenirName\0on_EditPriceSpinBox_valueChanged\0"
    "cost\0on_EditSouvenirButton_clicked\0"
    "on_AddCancelButton_clicked\0"
    "on_EditCancelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Maintenance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Maintenance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Maintenance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AddSouvenirButton_clicked(); break;
        case 1: _t->on_AddCollegeNameComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_EditSouvenirNameLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_EditPriceSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_EditSouvenirButton_clicked(); break;
        case 5: _t->on_AddCancelButton_clicked(); break;
        case 6: _t->on_EditCancelButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Maintenance::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Maintenance.data,
    qt_meta_data_Maintenance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Maintenance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Maintenance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Maintenance.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Maintenance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
