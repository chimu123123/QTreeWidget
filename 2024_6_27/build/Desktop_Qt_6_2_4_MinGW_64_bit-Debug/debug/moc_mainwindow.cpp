/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[44];
    char stringdata0[445];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 26), // "on_actAddCatalog_triggered"
QT_MOC_LITERAL(38, 0), // ""
QT_MOC_LITERAL(39, 23), // "on_actAddFile_triggered"
QT_MOC_LITERAL(63, 26), // "on_actDeleteNode_triggered"
QT_MOC_LITERAL(90, 32), // "on_treeWidget_currentItemChanged"
QT_MOC_LITERAL(123, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(140, 7), // "current"
QT_MOC_LITERAL(148, 8), // "previous"
QT_MOC_LITERAL(157, 28), // "on_actTraverseNode_triggered"
QT_MOC_LITERAL(186, 20), // "on_actWide_triggered"
QT_MOC_LITERAL(207, 22), // "on_actHeight_triggered"
QT_MOC_LITERAL(230, 30), // "on_actCurrentAMP_RDE_triggered"
QT_MOC_LITERAL(261, 19), // "on_actAMP_triggered"
QT_MOC_LITERAL(281, 19), // "on_actRED_triggered"
QT_MOC_LITERAL(301, 27), // "on_actWindowsShow_triggered"
QT_MOC_LITERAL(329, 7), // "checked"
QT_MOC_LITERAL(337, 28), // "on_actWindowsFloat_triggered"
QT_MOC_LITERAL(366, 31), // "on_dockWidget_visibilityChanged"
QT_MOC_LITERAL(398, 7), // "visible"
QT_MOC_LITERAL(406, 29), // "on_dockWidget_topLevelChanged"
QT_MOC_LITERAL(436, 8) // "topLevel"

    },
    "MainWindow\0on_actAddCatalog_triggered\0"
    "\0on_actAddFile_triggered\0"
    "on_actDeleteNode_triggered\0"
    "on_treeWidget_currentItemChanged\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "on_actTraverseNode_triggered\0"
    "on_actWide_triggered\0on_actHeight_triggered\0"
    "on_actCurrentAMP_RDE_triggered\0"
    "on_actAMP_triggered\0on_actRED_triggered\0"
    "on_actWindowsShow_triggered\0checked\0"
    "on_actWindowsFloat_triggered\0"
    "on_dockWidget_visibilityChanged\0visible\0"
    "on_dockWidget_topLevelChanged\0topLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    2,  101,    2, 0x08,    4 /* Private */,
       9,    0,  106,    2, 0x08,    7 /* Private */,
      10,    0,  107,    2, 0x08,    8 /* Private */,
      11,    0,  108,    2, 0x08,    9 /* Private */,
      12,    0,  109,    2, 0x08,   10 /* Private */,
      13,    0,  110,    2, 0x08,   11 /* Private */,
      14,    0,  111,    2, 0x08,   12 /* Private */,
      15,    1,  112,    2, 0x08,   13 /* Private */,
      17,    1,  115,    2, 0x08,   15 /* Private */,
      18,    1,  118,    2, 0x08,   17 /* Private */,
      20,    1,  121,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, QMetaType::Bool,   21,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actAddCatalog_triggered(); break;
        case 1: _t->on_actAddFile_triggered(); break;
        case 2: _t->on_actDeleteNode_triggered(); break;
        case 3: _t->on_treeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 4: _t->on_actTraverseNode_triggered(); break;
        case 5: _t->on_actWide_triggered(); break;
        case 6: _t->on_actHeight_triggered(); break;
        case 7: _t->on_actCurrentAMP_RDE_triggered(); break;
        case 8: _t->on_actAMP_triggered(); break;
        case 9: _t->on_actRED_triggered(); break;
        case 10: _t->on_actWindowsShow_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->on_actWindowsFloat_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->on_dockWidget_visibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->on_dockWidget_topLevelChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
