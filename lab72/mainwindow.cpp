#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    scene = new ShapeScene(this);
    view = new QGraphicsView(scene, this);
    setCentralWidget(view);

    QWidget* buttonPanel = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(buttonPanel);

    QPushButton* addRectButton = new QPushButton("Добавить прямоугольник", buttonPanel);
    QPushButton* addEllipseButton = new QPushButton("Добавить эллипс", buttonPanel);
    QPushButton* addTriangleButton = new QPushButton("Добавить треугольник", buttonPanel);
    QPushButton* addremoveButton = new QPushButton("Удалить активную фигуру", buttonPanel);

    layout->addWidget(addRectButton);
    layout->addWidget(addEllipseButton);
    layout->addWidget(addTriangleButton);
    layout->addWidget(addremoveButton);
    buttonPanel->setLayout(layout);

    QDockWidget* dock = new QDockWidget("Фигуры", this);
    dock->setWidget(buttonPanel);
    addDockWidget(Qt::LeftDockWidgetArea, dock);

    connect(addRectButton, &QPushButton::clicked, this, &MainWindow::addRectangle);
    connect(addEllipseButton, &QPushButton::clicked, this, &MainWindow::addEllipse);
    connect(addTriangleButton, &QPushButton::clicked, this, &MainWindow::addTriangle);
    connect(addremoveButton, &QPushButton::clicked, this, &MainWindow::removeSelectedItems);
}

void MainWindow::addRectangle() {
    scene->addRectangle();
}

void MainWindow::addEllipse() {
    scene->addEllipse();
}

void MainWindow::addTriangle() {
    scene->addTriangle();
}

void MainWindow::removeSelectedItems() {
    foreach (QGraphicsItem* item, scene->selectedItems()) {
        scene->removeItem(item);
        delete item;
    }
}
