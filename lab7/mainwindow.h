#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "ShapeWidget.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);

private slots:
    void addRectangle();
    void addEllipse();
    void addTriangle();

private:
    ShapeWidget* shapeWidget;
};

#endif
