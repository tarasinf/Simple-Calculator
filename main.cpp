
#include "mainclass.h"
#include "uiclass.h"

#include "testuiclass.h"
#include "testcalcclass.h"

#include <QTest>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTest::qExec(new TestCalcClass, argc, argv);
    QTest::qExec(new TestUiClass, argc, argv);


    MainClass SimpleCalculator;
    SimpleCalculator.start();



    return a.exec();
}
