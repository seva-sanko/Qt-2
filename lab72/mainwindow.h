#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDockWidget>
#include "ShapeScene.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);

private slots:
    void addRectangle();
    void addEllipse();
    void addTriangle();
    void removeSelectedItems();

private:
    ShapeScene* scene;
    QGraphicsView* view;
};

#endif
