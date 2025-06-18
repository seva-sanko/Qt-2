#include "ShapeScene.h"

ShapeScene::ShapeScene(QObject* parent) : QGraphicsScene(parent) {
    setSceneRect(0, 0, 800, 600);
}

void ShapeScene::addRectangle() {
    auto* rect = new RectangleItem(QRectF(100, 100, 100, 100));
    addItem(rect);
}

void ShapeScene::addEllipse() {
    auto* ellipse = new Ellipse(200, 200, 100, 100);
    addItem(ellipse);
}

void ShapeScene::addTriangle() {
    QPolygonF triangle;
    triangle << QPointF(300, 300) << QPointF(350, 400) << QPointF(250, 400);
    auto* tri = new TriangleItem(triangle);
    addItem(tri);
}

void ShapeScene::mouseMoveEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsScene::mouseMoveEvent(event);

    QGraphicsItem* item = itemAt(event->scenePos(), QTransform());
    if (item && item->isSelected()) {
        //qreal currentZ = item->zValue();
        item->setZValue(maxZValue + 1);

        maxZValue = item->zValue();
    }
}

void ShapeScene::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    QGraphicsItem* item = itemAt(event->scenePos(), QTransform());

    if (item) {
        maxZValue += 1;
        item->setZValue(maxZValue);
    }

    QGraphicsScene::mousePressEvent(event);
}
