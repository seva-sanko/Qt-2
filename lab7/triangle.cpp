#include "Triangle.h"

Triangle::Triangle(const QPolygon& triangle) : triangle(triangle) {}

void Triangle::draw(QPainter* painter) const {
    painter->setBrush(Qt::red);
    painter->drawPolygon(triangle);
}

bool Triangle::contains(const QPoint& point) const {
    return triangle.containsPoint(point, Qt::OddEvenFill);
}

void Triangle::move(const QPoint& offset) {
    triangle.translate(offset);
}
