TEMPLATE += app
QT += testlib gui widgets
CONFIG += testcase
INCLUDEPATH += "include" 
INCLUDEPATH += "$$PWD/../analogueClock/include" "$$PWD/../MyMainWindow/include"

HEADERS += "include/test.hpp"
SOURCES += "src/test.cpp"
