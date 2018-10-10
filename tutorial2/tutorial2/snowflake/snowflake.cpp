#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include <QMessageBox>
#include <QPainter>
#include <QDesktopWidget>
#include <QElapsedTimer>
#include <QKeyEvent>
#include <iostream>
#include "snowflake.hpp"
#include "MyMainWindow.hpp"

MyWidget::MyWidget() {
	this->setFocusPolicy(Qt::StrongFocus);
	clickTimer = new QElapsedTimer();
	clickTimer->start();
}

MyWidget::~MyWidget() {
	delete clickTimer;
}

void MyWidget::EnableMouse()
{
  this->setMouseTracking(true);
}

void MyWidget::mouseMoveEvent(QMouseEvent *_event)
{
  if (this->rect().contains(_event->pos()) && this->clickTimer->hasExpired(10000))  {
	QMessageBox::information(this,"Hey!","Cut that out!");
	this->clickTimer->restart();
  }
  else {
    // Mouse out of Widget
  }
}

void MyWidget::keyPressEvent(QKeyEvent* event) {
	if (event->key() == Qt::Key_Escape) {
		QApplication::exit(0);
	} else {
		QMessageBox::information(this, "Hey!", "Don't do that, either!");
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
