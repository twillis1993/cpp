#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include <analogueClock.hpp>

int main(int argc, char **argv) {
  QApplication app(argc, argv);  

  AnalogueClock clock;

  clock.show();

  return app.exec();
}
