#ifndef TRIANGLEITEM_H
#define TRIANGLEITEM_H

#include <QGraphicsPolygonItem>
#include <QGraphicsSceneMouseEvent>

class TriangleItem : public QGraphicsPolygonItem {
public:
    explicit TriangleItem(const QPolygonF& polygon, QGraphicsItem* parent = nullptr);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
};

#endif
