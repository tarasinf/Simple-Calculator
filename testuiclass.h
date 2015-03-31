#ifndef TESTUICLASS_H
#define TESTUICLASS_H

#include <QObject>
#include <QtTest>
#include <QtCore>
#include <QtGui>
#include "uiclass.h"

class TestUiClass : public QObject
{
    Q_OBJECT
public:
    explicit TestUiClass(QObject *parent = 0);
    ~TestUiClass();

signals:

public slots:
private slots:
    void testForm();
    void testComponent();
};

#endif // TESTUICLASS_H
