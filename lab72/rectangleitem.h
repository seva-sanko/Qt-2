#ifndef RECTANGLEITEM_H
#define RECTANGLEITEM_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class RectangleItem : public QGraphicsRectItem {
public:
    explicit RectangleItem(const QRectF& rect, QGraphicsItem* parent = nullptr);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
};

#endif
