#ifndef ELLIPSEITEM_H
#define ELLIPSEITEM_H

#include <QGraphicsEllipseItem>
#include <QGraphicsSceneMouseEvent>

class Ellipse : public QGraphicsEllipseItem {
public:
    explicit Ellipse(qreal x, qreal y, qreal width, qreal height, QGraphicsItem* parent = nullptr);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;

private:
    bool isDragging;
    QPointF previousPos;
};

#endif
