#include <QtTest/QtTest>

// From http://doc.qt.io/archives/qt-4.8/qt-qtestlib-tutorial1-example.html

class TestQString: public QObject {
	Q_OBJECT

	private slots:
		void toUpper();
};
