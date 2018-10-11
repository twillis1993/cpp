#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include "MyMainWindow.hpp"

int main(int argc, char **argv) {
  QApplication app(argc, argv);

  QMainWindow window;

  window.show();

  return app.exec();
}
