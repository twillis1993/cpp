TEMPLATE = app 
QT       += core gui  
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11
TARGET = PushButtonExample 
SOURCES += src/main.cpp src/mainwindow.cpp src/myclass.cpp
INCLUDEPATH += include
HEADERS += include/mainwindow.hpp include/myclass.hpp
