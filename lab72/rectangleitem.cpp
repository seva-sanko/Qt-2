#include "RectangleItem.h"
#include <QPen>
#include <QBrush>

RectangleItem::RectangleItem(const QRectF& rect, QGraphicsItem* parent)
    : QGraphicsRectItem(rect, parent) {
    setBrush(QBrush(Qt::blue));
    setPen(QPen(Qt::black));
    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
}

void RectangleItem::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsRectItem::mousePressEvent(event);
}

void RectangleItem::mouseMoveEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsRectItem::mouseMoveEvent(event);
}

void RectangleItem::mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsRectItem::mouseReleaseEvent(event);
}
