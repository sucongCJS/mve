/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "on_new_scene"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "on_reload_scene"
QT_MOC_LITERAL(4, 41, 13), // "on_save_scene"
QT_MOC_LITERAL(5, 55, 14), // "on_close_scene"
QT_MOC_LITERAL(6, 70, 16), // "on_refresh_scene"
QT_MOC_LITERAL(7, 87, 8), // "on_about"
QT_MOC_LITERAL(8, 96, 16), // "on_import_images"
QT_MOC_LITERAL(9, 113, 16), // "on_update_memory"
QT_MOC_LITERAL(10, 130, 16), // "on_cache_cleanup"
QT_MOC_LITERAL(11, 147, 15), // "on_recon_export"
QT_MOC_LITERAL(12, 163, 15), // "on_batch_delete"
QT_MOC_LITERAL(13, 179, 18), // "on_generate_thumbs"
QT_MOC_LITERAL(14, 198, 14), // "on_switch_tabs"
QT_MOC_LITERAL(15, 213, 6), // "tab_id"
QT_MOC_LITERAL(16, 220, 10), // "closeEvent"
QT_MOC_LITERAL(17, 231, 12), // "QCloseEvent*"
QT_MOC_LITERAL(18, 244, 5), // "event"
QT_MOC_LITERAL(19, 250, 23) // "raise_open_scene_dialog"

    },
    "MainWindow\0on_new_scene\0\0on_reload_scene\0"
    "on_save_scene\0on_close_scene\0"
    "on_refresh_scene\0on_about\0on_import_images\0"
    "on_update_memory\0on_cache_cleanup\0"
    "on_recon_export\0on_batch_delete\0"
    "on_generate_thumbs\0on_switch_tabs\0"
    "tab_id\0closeEvent\0QCloseEvent*\0event\0"
    "raise_open_scene_dialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    1,  101,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_new_scene(); break;
        case 1: _t->on_reload_scene(); break;
        case 2: _t->on_save_scene(); break;
        case 3: _t->on_close_scene(); break;
        case 4: _t->on_refresh_scene(); break;
        case 5: _t->on_about(); break;
        case 6: _t->on_import_images(); break;
        case 7: _t->on_update_memory(); break;
        case 8: _t->on_cache_cleanup(); break;
        case 9: _t->on_recon_export(); break;
        case 10: _t->on_batch_delete(); break;
        case 11: _t->on_generate_thumbs(); break;
        case 12: _t->on_switch_tabs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 14: _t->raise_open_scene_dialog(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
