#ifndef UICLASS_H
#define UICLASS_H

#include <QMainWindow>
#include <QWheelEvent>
#include <QDebug>
namespace Ui {
class UiClass;
}

class UiClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit UiClass(QWidget *parent = 0);
    ~UiClass();
    void setTextOnLable(QString str);
    void setTextOnButton(QString str);
signals:
    void UpScrollMouse();
    void DownScrollMouse();
    void PressEnter();


private slots:
    void on_pushButton_clicked();

private:
    Ui::UiClass *ui;
    void wheelEvent ( QWheelEvent * event );



};

#endif // UICLASS_H
