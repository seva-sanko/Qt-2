#include "Ellipse.h"

Ellipse::Ellipse(const QRect& rect) : rect(rect) {}

void Ellipse::draw(QPainter* painter) const {
    painter->setBrush(Qt::green);
    painter->drawEllipse(rect);
}

bool Ellipse::contains(const QPoint& point) const {
    return rect.contains(point);
}

void Ellipse::move(const QPoint& offset) {
    rect.translate(offset);
}
