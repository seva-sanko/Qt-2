#include "MainWindow.h"

#include <QDockWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "ShapeWidget.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Triangle.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), shapeWidget(new ShapeWidget(this)) {
    setCentralWidget(shapeWidget);

    QWidget* buttonPanel = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(buttonPanel);

    QPushButton* addRectButton = new QPushButton("Добавить прямоугольник", buttonPanel);
    QPushButton* addEllipseButton = new QPushButton("Добавить эллипс", buttonPanel);
    QPushButton* addTriangleButton = new QPushButton("Добавить треугольник", buttonPanel);
    QPushButton* removeButton = new QPushButton("Удалить активную фигуру", buttonPanel);

    layout->addWidget(addRectButton);
    layout->addWidget(addEllipseButton);
    layout->addWidget(addTriangleButton);
    layout->addWidget(removeButton);
    buttonPanel->setLayout(layout);

    QDockWidget* dockWidget = new QDockWidget(this);
    dockWidget->setWidget(buttonPanel);
    addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

    connect(addRectButton, &QPushButton::clicked, this, &MainWindow::addRectangle);
    connect(addEllipseButton, &QPushButton::clicked, this, &MainWindow::addEllipse);
    connect(addTriangleButton, &QPushButton::clicked, this, &MainWindow::addTriangle);
    connect(removeButton, &QPushButton::clicked, shapeWidget, &ShapeWidget::removeActiveShape);
}

void MainWindow::addRectangle() {
    shapeWidget->addShape(std::make_shared<Rectangle>(QRect(100, 100, 100, 100)));
}

void MainWindow::addEllipse() {
    shapeWidget->addShape(std::make_shared<Ellipse>(QRect(200, 200, 100, 100)));
}

void MainWindow::addTriangle() {
    QPolygon triangle;
    triangle << QPoint(300, 300) << QPoint(350, 400) << QPoint(250, 400);
    shapeWidget->addShape(std::make_shared<Triangle>(triangle));
}
