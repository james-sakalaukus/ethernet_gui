#-------------------------------------------------
#
# Project created by QtCreator 2015-07-13T23:24:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ethernetGui
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    socketconnection.cpp

HEADERS  += mainwindow.h \
    socketconnection.h

FORMS    += mainwindow.ui
