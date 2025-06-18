#include "Rectangle.h"

Rectangle::Rectangle(const QRect& rect) : rect(rect) {}

void Rectangle::draw(QPainter* painter) const {
    painter->setBrush(Qt::blue);
    painter->drawRect(rect);
}

bool Rectangle::contains(const QPoint& point) const {
    return rect.contains(point);
}

void Rectangle::move(const QPoint& offset) {
    rect.translate(offset);
}
