/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BezierCurve/controller.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSControllerENDCLASS = QtMocHelpers::stringData(
    "Controller",
    "closed",
    "",
    "on_pushButton_4_clicked",
    "solveBezierDnC",
    "MainWindow*",
    "window",
    "solveBezierBrute",
    "on_textEdit_textChanged",
    "transformDot",
    "on_pushButton_clicked",
    "on_lineEdit_textChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[15];
    char stringdata5[12];
    char stringdata6[7];
    char stringdata7[17];
    char stringdata8[24];
    char stringdata9[13];
    char stringdata10[22];
    char stringdata11[24];
    char stringdata12[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSControllerENDCLASS_t qt_meta_stringdata_CLASSControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Controller"
        QT_MOC_LITERAL(11, 6),  // "closed"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 23),  // "on_pushButton_4_clicked"
        QT_MOC_LITERAL(43, 14),  // "solveBezierDnC"
        QT_MOC_LITERAL(58, 11),  // "MainWindow*"
        QT_MOC_LITERAL(70, 6),  // "window"
        QT_MOC_LITERAL(77, 16),  // "solveBezierBrute"
        QT_MOC_LITERAL(94, 23),  // "on_textEdit_textChanged"
        QT_MOC_LITERAL(118, 12),  // "transformDot"
        QT_MOC_LITERAL(131, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(153, 23),  // "on_lineEdit_textChanged"
        QT_MOC_LITERAL(177, 4)   // "arg1"
    },
    "Controller",
    "closed",
    "",
    "on_pushButton_4_clicked",
    "solveBezierDnC",
    "MainWindow*",
    "window",
    "solveBezierBrute",
    "on_textEdit_textChanged",
    "transformDot",
    "on_pushButton_clicked",
    "on_lineEdit_textChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       7,    1,   67,    2, 0x08,    5 /* Private */,
       8,    0,   70,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    8 /* Private */,
      10,    0,   72,    2, 0x08,    9 /* Private */,
      11,    1,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Controller, std::true_type>,
        // method 'closed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'solveBezierDnC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MainWindow *, std::false_type>,
        // method 'solveBezierBrute'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MainWindow *, std::false_type>,
        // method 'on_textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transformDot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->solveBezierDnC((*reinterpret_cast< std::add_pointer_t<MainWindow*>>(_a[1]))); break;
        case 3: _t->solveBezierBrute((*reinterpret_cast< std::add_pointer_t<MainWindow*>>(_a[1]))); break;
        case 4: _t->on_textEdit_textChanged(); break;
        case 5: _t->transformDot(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MainWindow* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MainWindow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)();
            if (_t _q_method = &Controller::closed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Controller::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
