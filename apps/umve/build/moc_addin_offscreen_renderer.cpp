/****************************************************************************
** Meta object code from reading C++ file 'addin_offscreen_renderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scene_addins/addin_offscreen_renderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addin_offscreen_renderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddinOffscreenRenderer_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddinOffscreenRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddinOffscreenRenderer_t qt_meta_stringdata_AddinOffscreenRenderer = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AddinOffscreenRenderer"
QT_MOC_LITERAL(1, 23, 11), // "on_snapshot"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "on_render_sequence"
QT_MOC_LITERAL(4, 55, 16), // "on_play_sequence"
QT_MOC_LITERAL(5, 72, 4), // "save"
QT_MOC_LITERAL(6, 77, 19) // "on_display_sequence"

    },
    "AddinOffscreenRenderer\0on_snapshot\0\0"
    "on_render_sequence\0on_play_sequence\0"
    "save\0on_display_sequence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddinOffscreenRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       4,    0,   44,    2, 0x28 /* Private | MethodCloned */,
       6,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddinOffscreenRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddinOffscreenRenderer *_t = static_cast<AddinOffscreenRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_snapshot(); break;
        case 1: _t->on_render_sequence(); break;
        case 2: _t->on_play_sequence((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_play_sequence(); break;
        case 4: _t->on_display_sequence(); break;
        default: ;
        }
    }
}

const QMetaObject AddinOffscreenRenderer::staticMetaObject = {
    { &AddinBase::staticMetaObject, qt_meta_stringdata_AddinOffscreenRenderer.data,
      qt_meta_data_AddinOffscreenRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddinOffscreenRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddinOffscreenRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddinOffscreenRenderer.stringdata0))
        return static_cast<void*>(this);
    return AddinBase::qt_metacast(_clname);
}

int AddinOffscreenRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddinBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
