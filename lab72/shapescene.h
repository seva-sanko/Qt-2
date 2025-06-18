#ifndef SHAPESCENE_H
#define SHAPESCENE_H

#include <QGraphicsScene>
#include "RectangleItem.h"
#include "ElipseItem.h"
#include "TriangleItem.h"

class ShapeScene : public QGraphicsScene {
    Q_OBJECT

public:
    explicit ShapeScene(QObject* parent = nullptr);

    void addRectangle();
    void addEllipse();
    void addTriangle();
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
private:
    qreal maxZValue;
};

#endif
