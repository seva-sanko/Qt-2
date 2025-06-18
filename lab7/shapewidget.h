#ifndef SHAPEWIDGET_H
#define SHAPEWIDGET_H

#include <QWidget>
#include <vector>
#include <memory>
#include "Shape.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Triangle.h"

class ShapeWidget : public QWidget {
    Q_OBJECT

    std::vector<std::shared_ptr<Shape>> shapes;
    std::shared_ptr<Shape> activeShape = nullptr;
    QPoint lastMousePos;

public:
    explicit ShapeWidget(QWidget* parent = nullptr);

    void addShape(const std::shared_ptr<Shape>& shape);
    void removeActiveShape();

protected:
    void paintEvent(QPaintEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
};

#endif
