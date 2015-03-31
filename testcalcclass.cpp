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

void TestCalcClass::testSub()
{
    CalcClass calc;
    int error;

    QCOMPARE(calc.sub(1,4,&error),-3);
    if ( (error) != 0)
    {
        qDebug()<<"Error sub with code: "<<error;
    }

    QCOMPARE(calc.sub(-9,9,&error),-18);
    if ( (error) != 0)
    {
        qDebug()<<"Error sub with code: "<<error;
    }
}

void TestCalcClass::testMul()
{
    CalcClass calc;
    int error;

    QCOMPARE(calc.mul(1,4,&error),4);
    if ( (error) != 0)
    {
        qDebug()<<"Error mul with code: "<<error;
    }

    QCOMPARE(calc.mul(-9,9,&error),-81);
    if ( (error) != 0)
    {
        qDebug()<<"Error mul with code: "<<error;
    }
}

//QTEST_MAIN(TestCalcClass)

