#include <QMainWindow>
#include <QDesktopWidget>
#include "MyMainWindow.hpp"
#include <stdio.h>

MyMainWindow::MyMainWindow(){
  resize(QDesktopWidget().availableGeometry(this).size() * 0.7);
}
/*
int main(int argc, char** argv) {
	printf("Hello world!\n");
	return 0;
}
*/
