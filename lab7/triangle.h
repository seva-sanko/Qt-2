#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <QPolygon>

class Triangle : public Shape {
    QPolygon triangle;

public:
    explicit Triangle(const QPolygon& triangle);

    void draw(QPainter* painter) const override;
    bool contains(const QPoint& point) const override;
    void move(const QPoint& offset) override;
};

#endif
