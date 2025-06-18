#include "ShapeWidget.h"
#include <QPainter>
#include <QMouseEvent>
#include <algorithm>

ShapeWidget::ShapeWidget(QWidget* parent) : QWidget(parent) {
    setMinimumSize(800, 600);
}

void ShapeWidget::addShape(const std::shared_ptr<Shape>& shape) {
    shapes.push_back(shape);
    update();
}

void ShapeWidget::removeActiveShape() {
    if (activeShape) {
        auto it = std::remove(shapes.begin(), shapes.end(), activeShape);
        shapes.erase(it, shapes.end());
        activeShape = nullptr;
        update();
    }
}

void ShapeWidget::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    for (const auto& shape : shapes) {
        shape->draw(&painter);
    }
}

void ShapeWidget::mousePressEvent(QMouseEvent* event) {
    for (auto it = shapes.rbegin(); it != shapes.rend(); ++it) {
        if ((*it)->contains(event->pos())) {
            activeShape = *it;
            lastMousePos = event->pos();
            // перемещаем активную фигуру на передний план
            shapes.erase(std::next(it).base());
            shapes.push_back(activeShape);
            update();
            return;
        }
    }
    activeShape = nullptr;
    update();
}

void ShapeWidget::mouseMoveEvent(QMouseEvent* event) {
    if (activeShape && event->buttons() & Qt::LeftButton) {
        QPoint offset = event->pos() - lastMousePos;
        activeShape->move(offset);
        lastMousePos = event->pos();
        update();
    }
}
