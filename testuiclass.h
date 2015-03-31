#ifndef TESTUICLASS_H
#define TESTUICLASS_H

#include <QObject>

class TestUiClass : public QObject
{
    Q_OBJECT
public:
    explicit TestUiClass(QObject *parent = 0);
    ~TestUiClass();

signals:

public slots:
};

#endif // TESTUICLASS_H
