#ifndef MAINCLASS_H
#define MAINCLASS_H

#include <QObject>
#include "calcclass.h"
#include "uiclass.h"
#include <Qvector>
#include <QString>
#include <QDebug>

class MainClass : public QObject
{
    Q_OBJECT
public:
    explicit MainClass(QObject *parent = 0);
    ~MainClass();

signals:

public slots:
    void start();
    void UpScroll();
    void DownScroll();
    void PressEnter();

public:
    UiClass *w;
private:
    CalcClass calc;
    int positionInMas;
    //int ;
    QString a,b,mathActiv;
    QVector <QString> mas;
    int getNext(int position, int direction);
};

#endif // MAINCLASS_H
