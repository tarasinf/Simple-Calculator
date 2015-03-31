#include "calcclass.h"

CalcClass::CalcClass()
{

}

CalcClass::~CalcClass()
{

}

int CalcClass::sum(int a, int b, int *error)
{
    (*error) = 0;
    return a+b;
}

int CalcClass::sub(int a, int b, int *error)
{
    (*error) = 0;
    return a-b;
}

int CalcClass::mul(int a, int b, int *error)
{
    (*error) = 0;
    return a*b;
}

int CalcClass::div(int a, int b, int *error)
{
    if(b == 0)
    {
        (*error) = 1;
        return 0;
    }else
    {
        (*error) = 0;
    }
    return a/b;
}

