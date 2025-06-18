#include "TriangleItem.h"
#include <QPen>
#include <QBrush>

TriangleItem::TriangleItem(const QPolygonF& polygon, QGraphicsItem* parent)
    : QGraphicsPolygonItem(polygon, parent) {
    setBrush(QBrush(Qt::red));
    setPen(QPen(Qt::black));
    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
}

void TriangleItem::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsPolygonItem::mousePressEvent(event);
}

void TriangleItem::mouseMoveEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsPolygonItem::mouseMoveEvent(event);
}

void TriangleItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsPolygonItem::mouseReleaseEvent(event);
}
