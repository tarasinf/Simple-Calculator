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

    QCOMPARE(calc.sum(1,4),5);
}

//QTEST_MAIN(TestCalcClass)

