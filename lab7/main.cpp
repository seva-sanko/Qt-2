#include "MainWindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <vector>
#include <memory>


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
