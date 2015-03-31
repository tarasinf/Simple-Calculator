
#include "mainclass.h"
#include "testcalcclass.h"

#include <QTest>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTest::qExec(new TestCalcClass, argc, argv);

    MainClass SimpleCalculator;
    SimpleCalculator.start();



    return a.exec();
}
