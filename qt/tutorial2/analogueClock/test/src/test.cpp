#include <test.hpp>
#include <analogueClockWindow.hpp>

// TODO placeholder, change me
void TestQString::toUpper() {
	QString str = "Hello";
	QVERIFY(str.toUpper() == "HELLO");
	QCOMPARE(str.toUpper(), QString("HELLO"));
}

QTEST_MAIN(TestQString)
