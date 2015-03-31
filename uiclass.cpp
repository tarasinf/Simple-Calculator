#include "uiclass.h"
#include "ui_uiclass.h"

UiClass::UiClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UiClass)
{
    ui->setupUi(this);
    ui->label->setAlignment( Qt::AlignRight);
}

UiClass::~UiClass()
{
    delete ui;
}

void UiClass::setTextOnLable(QString str)
{
    ui->label->setText(str);
}

void UiClass::setTextOnButton(QString str)
{
    ui->pushButton->setText(str);
}



void UiClass::on_pushButton_clicked()
{
    emit PressEnter();
}

void UiClass::wheelEvent(QWheelEvent *event)
{
    if(event->delta()/120 > 0)
    {
        emit UpScrollMouse();
    }else if(event->delta()/120 < 0)
    {
        emit DownScrollMouse();
    }
}
