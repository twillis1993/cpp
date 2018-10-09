
#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QPainter>
#include <QDesktopWidget>
#include <iostream>
#include "snowflake.hpp"
#include "MyMainWindow.hpp"

void MyWidget::EnableMouse()
{
  // you must set mouse tracking, it's off by default
  this->setMouseTracking(true);
}

void MyWidget::mouseMoveEvent(QMouseEvent *_event)
{
  if (this->rect().contains(_event->pos())) {
    // Mouse over Widget
    QMessageBox::information(this,"snowflake","Cut that out!");
  }
  else {
    // Mouse out of Widget
  }
}

void MyWidget::paintEvent( QPaintEvent * )
{
  QPainter p( this );
  p.setPen( Qt::darkGray );
  p.drawRect( 1,2, 5,4 );
  p.setPen( Qt::lightGray );
  p.drawLine( 9,2, 7,7 );
}

MyMainWindow::MyMainWindow(){
  // my window asks how big the desktop is; this is a widget for QT
  resize(QDesktopWidget().availableGeometry(this).size() * 0.7);
  // I've set my window to 70 % of the desktop
}

int main(int argc, char **argv) {
  QApplication app(argc, argv);
  MyMainWindow window;

  MyWidget w;
  w.EnableMouse(); // don't forget this
  window.setCentralWidget(&w);
  window.show();

  return app.exec();
}
