#include "mainclass.h"


MainClass::MainClass(QObject *parent) : QObject(parent)
{
    w = new UiClass();
    mas.push_back("0");
    mas.push_back("1");
    mas.push_back("2");
    mas.push_back("3");
    mas.push_back("4");
    mas.push_back("5");
    mas.push_back("6");
    mas.push_back("7");
    mas.push_back("8");
    mas.push_back("9");
    mas.push_back("+");
    mas.push_back("-");
    mas.push_back("*");
    mas.push_back("/");
    mas.push_back("=");
    mas.push_back("C");

    positionInMas = 0;
    mathActiv = "";
    a = "";
    b = "";
    //connect(this->w,SIGNAL( UpScrollMouse()), this,SLOT(UpScroll()));
    QObject::connect(this->w,SIGNAL(UpScrollMouse()),this,SLOT(UpScroll()));
    QObject::connect(this->w,SIGNAL(DownScrollMouse()),this,SLOT(DownScroll()));
    QObject::connect(this->w,SIGNAL(PressEnter()),this,SLOT(PressEnter()));
}

MainClass::~MainClass()
{

}

void MainClass::start()
{
    w->setTextOnButton(mas[positionInMas]);
    w->setTextOnLable("0");
    w->show();
}

void MainClass::UpScroll()
{
    positionInMas = getNext(positionInMas,1);
    w->setTextOnButton(mas[positionInMas]);
    qDebug()<<"scroll up";
}

void MainClass::DownScroll()
{
    positionInMas = getNext(positionInMas,-1);
    w->setTextOnButton(mas[positionInMas]);
    qDebug()<<"scroll down";
}

void MainClass::PressEnter()
{

    if( (positionInMas >= 0) && (positionInMas <=9 ))
    {
        if(mathActiv == "")
        {
            a.push_back(mas[positionInMas]);
            w->setTextOnLable(a);
        }else
        {
            b.push_back(mas[positionInMas]);
            w->setTextOnLable(b);
        }
    }
    if(mas[positionInMas] == "C")
    {
        a = "";
        b = "";
        mathActiv = "";
        w->setTextOnLable("0");
    }

    if(mas[positionInMas] == "+")
    {
        mathActiv = "+";
    }
    if(mas[positionInMas] == "-")
    {
        mathActiv = "-";
    }
    if(mas[positionInMas] == "*")
    {
        mathActiv = "*";
    }
    if(mas[positionInMas] == "/")
    {
        mathActiv = "/";
    }

    if(mas[positionInMas] == "=")
    {
        int error;
        int ans;

        if(mathActiv == "+")
        {
           ans = this->calc.sum(a.toInt(),b.toInt(),&error);
        }
        if(mathActiv == "-")
        {
           ans = this->calc.sub(a.toInt(),b.toInt(),&error);
        }
        if(mathActiv == "*")
        {
           ans = this->calc.mul(a.toInt(),b.toInt(),&error);
        }
        if(mathActiv == "/")
        {
           ans = this->calc.div(a.toInt(),b.toInt(),&error);
        }

        w->setTextOnLable(QString::number(ans) );
    }
    qDebug()<<"Enter pressed";
}

int MainClass::getNext(int position, int direction)
{
    if(direction > 0)
    {
        if(position == mas.length()-1)
        {
            return 0;
        }else
        {
            return position + 1;
        }
    }
    if(direction < 0)
    {
        if(position == 0)
        {
            return mas.length() - 1;
        }else
        {
            return position - 1;
        }
    }
}
