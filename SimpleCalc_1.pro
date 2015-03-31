#-------------------------------------------------
#
# Project created by QtCreator 2015-03-31T09:37:05
#
#-------------------------------------------------

QT       += core gui testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleCalc_1
TEMPLATE = app


SOURCES += main.cpp\
        uiclass.cpp \
    mainclass.cpp \
    calcclass.cpp \
    testcalcclass.cpp

HEADERS  += uiclass.h \
    mainclass.h \
    calcclass.h \
    testcalcclass.h

FORMS    += uiclass.ui
