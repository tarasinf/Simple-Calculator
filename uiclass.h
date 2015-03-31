#ifndef UICLASS_H
#define UICLASS_H

#include <QMainWindow>

namespace Ui {
class UiClass;
}

class UiClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit UiClass(QWidget *parent = 0);
    ~UiClass();

private:
    Ui::UiClass *ui;
};

#endif // UICLASS_H
