#include "testcalcclass.h"

TestCalcClass::TestCalcClass(QObject *parent) : QObject(parent)
{

}

TestCalcClass::~TestCalcClass()
{

}

void TestCalcClass::testAdd()
{
    CalcClass calc;

    int *error;
    QCOMPARE(calc.sum(1,4,error),5);
    if (error != 0)
    {
        qDebug()<<"Error add with code: "<<error;
    }
}

//QTEST_MAIN(TestCalcClass)

