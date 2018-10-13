#include <QMainWindow>
#include <QDesktopWidget>
#include "MyMainWindow.hpp"
#include <stdio.h>

MyMainWindow::MyMainWindow(){
  resize(QDesktopWidget().availableGeometry(this).size() * 0.7);
}
