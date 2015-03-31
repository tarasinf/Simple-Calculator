#ifndef CALCCLASS_H
#define CALCCLASS_H


class CalcClass
{
public:
    CalcClass();
    ~CalcClass();
    int sum(int a, int b, int *error);
    int sub(int a, int b, int *error);
    int mul(int a, int b, int *error);
    int div(int a, int b, int *error);
};

#endif // CALCCLASS_H
