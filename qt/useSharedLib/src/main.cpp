#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include <MyMainWindow.hpp>

int main(int argc, char **argv) {
	QApplication app(argc,argv);

	MyMainWindow window;
	
	window.show();

	printf("Hello world!\n");
  	return app.exec();
}
