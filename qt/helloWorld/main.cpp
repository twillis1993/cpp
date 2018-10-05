#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv) {
	QApplication a(argc, argv);

	QPushButton hello("Hello world!", 0);

	hello.resize(200,60);
	hello.setToolTip("A tooltip!");

	QPushButton goodbye("Goodbye, world!", &hello);

	hello.show();

	return a.exec();
}
