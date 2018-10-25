#include <RotatingObject.hpp>
#include <QApplication>
#include <QDesktopWidget>
#include <QMainWindow>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	
	QDesktopWidget desktopWidget;

	QMainWindow mainWindow;

	mainWindow.resize(desktopWidget.width()*0.7,desktopWidget.height()*0.7);

	RotatingObject rotatingObject(&mainWindow);

	mainWindow.setCentralWidget(&rotatingObject);

	mainWindow.show();

	return app.exec();	
}
