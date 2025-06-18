#ifndef SHAPE_H
#define SHAPE_H

#include <QPainter>
#include <QPoint>

class Shape {
public:
    virtual ~Shape();

    virtual void draw(QPainter* painter) const = 0;
    virtual bool contains(const QPoint& point) const = 0;
    virtual void move(const QPoint& offset) = 0;
};

#endif
