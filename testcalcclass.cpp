#include "testcalcclass.h"

TestCalcClass::TestCalcClass(QObject *parent) : QObject(parent)
{

}

TestCalcClass::~TestCalcClass()
{

}
/*
void TestCalcClass::testSub()
{

}

void TestCalcClass::testMul()
{

}
*/
void TestCalcClass::testDiv()
{
    CalcClass calc;
    int error = 0;

    QCOMPARE(calc.div(1,4,&error),0);
    if ( (error) != 0)
    {
        qDebug()<<"Error sum with code: "<<error;
    }

    QCOMPARE(calc.div(-9999,0,&error),0);
    if ( (error) != 0)
    {
        qDebug()<<"Error sum with code: "<<error;
    }

    QCOMPARE(calc.div(-9999,9999,&error),-1);
    if ( (error) != 0)
    {
        qDebug()<<"Error sum with code: "<<error;
    }
}

void TestCalcClass::testSum()
{
    CalcClass calc;
    int error;

    QCOMPARE(calc.sum(1,4,&error),5);
    if ( (error) != 0)
    {
        qDebug()<<"Error sum with code: "<<error;
    }

    QCOMPARE(calc.sum(-9999,9999,&error),0);
    if ( (error) != 0)
    {
        qDebug()<<"Error sum with code: "<<error;
    }
}

//QTEST_MAIN(TestCalcClass)

