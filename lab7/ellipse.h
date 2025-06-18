#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"
#include <QRect>

class Ellipse : public Shape {
    QRect rect;

public:
    explicit Ellipse(const QRect& rect);

    void draw(QPainter* painter) const override;
    bool contains(const QPoint& point) const override;
    void move(const QPoint& offset) override;
};

#endif
