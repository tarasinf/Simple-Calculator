#ifndef TESTCALCCLASS_H
#define TESTCALCCLASS_H
#include <QtTest>
#include <QtCore>

#include "calcclass.h"


#include <QObject>

class TestCalcClass : public QObject
{
    Q_OBJECT
public:
    explicit TestCalcClass(QObject *parent = 0);
    ~TestCalcClass();

signals:

public slots:
private slots:
    void testSum();
    void testSub();
    void testMul();
    void testDiv();

};



#endif // TESTCALCCLASS_H
