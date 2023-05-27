/****************************************************************************
** Meta object code from reading C++ file 'lecteurvue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../v-2/lecteurvue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lecteurvue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_lecteurvue_t {
    QByteArrayData data[12];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_lecteurvue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_lecteurvue_t qt_meta_stringdata_lecteurvue = {
    {
QT_MOC_LITERAL(0, 0, 10), // "lecteurvue"
QT_MOC_LITERAL(1, 11, 7), // "avancer"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "reculer"
QT_MOC_LITERAL(4, 28, 8), // "majImage"
QT_MOC_LITERAL(5, 37, 11), // "lancerDiapo"
QT_MOC_LITERAL(6, 49, 12), // "arreterDiapo"
QT_MOC_LITERAL(7, 62, 13), // "filtrerImages"
QT_MOC_LITERAL(8, 76, 12), // "chargerDiapo"
QT_MOC_LITERAL(9, 89, 19), // "changerVitesseDiapo"
QT_MOC_LITERAL(10, 109, 12), // "enleverDiapo"
QT_MOC_LITERAL(11, 122, 17) // "afficherAProposDe"

    },
    "lecteurvue\0avancer\0\0reculer\0majImage\0"
    "lancerDiapo\0arreterDiapo\0filtrerImages\0"
    "chargerDiapo\0changerVitesseDiapo\0"
    "enleverDiapo\0afficherAProposDe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_lecteurvue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    0,   66,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

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

       0        // eod
};

void lecteurvue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<lecteurvue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avancer(); break;
        case 1: _t->reculer(); break;
        case 2: _t->majImage(); break;
        case 3: _t->lancerDiapo(); break;
        case 4: _t->arreterDiapo(); break;
        case 5: _t->filtrerImages(); break;
        case 6: _t->chargerDiapo(); break;
        case 7: _t->changerVitesseDiapo(); break;
        case 8: _t->enleverDiapo(); break;
        case 9: _t->afficherAProposDe(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject lecteurvue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_lecteurvue.data,
    qt_meta_data_lecteurvue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *lecteurvue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *lecteurvue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_lecteurvue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int lecteurvue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
