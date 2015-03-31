#include "uiclass.h"
#include "ui_uiclass.h"

UiClass::UiClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UiClass)
{
    ui->setupUi(this);
}

UiClass::~UiClass()
{
    delete ui;
}
