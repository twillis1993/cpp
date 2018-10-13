#include "test.hpp"
#include "analogueClock.hpp"

void TestQString::toUpper() {
	QString str = "Hello";
	QVERIFY(str.toUpper() == "HELLO");
	QCOMPARE(str.toUpper(), QString("HELLO"));
}

QTEST_MAIN(TestQString)
