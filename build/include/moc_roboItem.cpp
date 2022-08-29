/****************************************************************************
** Meta object code from reading C++ file 'roboItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/roboItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roboItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_roboItem_t {
    QByteArrayData data[19];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_roboItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_roboItem_t qt_meta_stringdata_roboItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "roboItem"
QT_MOC_LITERAL(1, 9, 15), // "signalPub2DPose"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "signalPub2DGoal"
QT_MOC_LITERAL(4, 42, 9), // "updateMap"
QT_MOC_LITERAL(5, 52, 3), // "img"
QT_MOC_LITERAL(6, 56, 18), // "updateLocalCostMap"
QT_MOC_LITERAL(7, 75, 15), // "updateRobotPose"
QT_MOC_LITERAL(8, 91, 9), // "RobotPose"
QT_MOC_LITERAL(9, 101, 4), // "pose"
QT_MOC_LITERAL(10, 106, 17), // "updateLaserPoints"
QT_MOC_LITERAL(11, 124, 6), // "points"
QT_MOC_LITERAL(12, 131, 10), // "updatePath"
QT_MOC_LITERAL(13, 142, 15), // "updateLocalPath"
QT_MOC_LITERAL(14, 158, 19), // "updateGlobalCostMap"
QT_MOC_LITERAL(15, 178, 11), // "start2DPose"
QT_MOC_LITERAL(16, 190, 11), // "start2DGoal"
QT_MOC_LITERAL(17, 202, 16), // "updateLaserColor"
QT_MOC_LITERAL(18, 219, 5) // "color"

    },
    "roboItem\0signalPub2DPose\0\0signalPub2DGoal\0"
    "updateMap\0img\0updateLocalCostMap\0"
    "updateRobotPose\0RobotPose\0pose\0"
    "updateLaserPoints\0points\0updatePath\0"
    "updateLocalPath\0updateGlobalCostMap\0"
    "start2DPose\0start2DGoal\0updateLaserColor\0"
    "color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_roboItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       3,    2,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   84,    2, 0x0a /* Public */,
       6,    1,   87,    2, 0x0a /* Public */,
       7,    1,   90,    2, 0x0a /* Public */,
      10,    1,   93,    2, 0x0a /* Public */,
      12,    1,   96,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x0a /* Public */,
      14,    1,  102,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    1,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QPolygonF,   11,
    QMetaType::Void, QMetaType::QPolygonF,   11,
    QMetaType::Void, QMetaType::QPolygonF,   11,
    QMetaType::Void, QMetaType::QImage,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   18,

       0        // eod
};

void roboItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<roboItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalPub2DPose((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 1: _t->signalPub2DGoal((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 2: _t->updateMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->updateLocalCostMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->updateRobotPose((*reinterpret_cast< RobotPose(*)>(_a[1]))); break;
        case 5: _t->updateLaserPoints((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 6: _t->updatePath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 7: _t->updateLocalPath((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 8: _t->updateGlobalCostMap((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->start2DPose(); break;
        case 10: _t->start2DGoal(); break;
        case 11: _t->updateLaserColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (roboItem::*)(QPointF , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&roboItem::signalPub2DPose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (roboItem::*)(QPointF , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&roboItem::signalPub2DGoal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject roboItem::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_roboItem.data,
    qt_meta_data_roboItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *roboItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *roboItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_roboItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int roboItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void roboItem::signalPub2DPose(QPointF _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void roboItem::signalPub2DGoal(QPointF _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
