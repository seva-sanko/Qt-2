#include "ElipseItem.h"
#include <QPen>
#include <QBrush>

Ellipse::Ellipse(qreal x, qreal y, qreal width, qreal height, QGraphicsItem* parent)
    : QGraphicsEllipseItem(x, y, width, height, parent), isDragging(false) {
    setBrush(QBrush(Qt::green));
    setPen(QPen(Qt::black));
    setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
}

void Ellipse::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        isDragging = true;
        previousPos = event->scenePos();
    }
    QGraphicsEllipseItem::mousePressEvent(event);
}

void Ellipse::mouseMoveEvent(QGraphicsSceneMouseEvent* event) {
    if (isDragging) {
        QPointF offset = event->scenePos() - previousPos;
        moveBy(offset.x(), offset.y());
        previousPos = event->scenePos();
    }
    QGraphicsEllipseItem::mouseMoveEvent(event);
}

void Ellipse::mouseReleaseEvent(QGraphicsSceneMouseEvent* event) {
    if (event->button() == Qt::LeftButton) {
        isDragging = false;
    }
    QGraphicsEllipseItem::mouseReleaseEvent(event);
}
