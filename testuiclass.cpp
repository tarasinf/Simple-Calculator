#include "testuiclass.h"

TestUiClass::TestUiClass(QObject *parent) : QObject(parent)
{

}

TestUiClass::~TestUiClass()
{

}

void TestUiClass::testForm()
{
    UiClass w;
    w.show();

    QVERIFY( w.isEnabled());
    QVERIFY( w.isVisible());
}

void TestUiClass::testComponent()
{

}



