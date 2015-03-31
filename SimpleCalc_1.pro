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
    calcclass.cpp \
    testcalcclass.cpp \
    testuiclass.cpp \
    mainclass.cpp

HEADERS  += uiclass.h \
    calcclass.h \
    testcalcclass.h \
    testuiclass.h \
    mainclass.h

FORMS    += uiclass.ui
