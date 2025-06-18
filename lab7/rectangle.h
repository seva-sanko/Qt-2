#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <QRect>

class Rectangle : public Shape {
    QRect rect;

public:
    explicit Rectangle(const QRect& rect);

    void draw(QPainter* painter) const override;
    bool contains(const QPoint& point) const override;
    void move(const QPoint& offset) override;
};

#endif
