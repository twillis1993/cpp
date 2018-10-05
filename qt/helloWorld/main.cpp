#include <qapplication.h>
#include <qpushbutton.h>

int main(int argc, char **argv) {
	QApplication a(argc, argv);

	QPushButton hello("Hello world!", 0);

	hello.resize(200,60);
	hello.setText("Goodbye, world!");
	hello.setToolTip("A tooltip!");

	hello.show();
	return a.exec();
}
