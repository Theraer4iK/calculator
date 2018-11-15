#include "calculator.h"

int Calculator::Add (double a, double b)
{
    double result = a + b;
    return result > 0 ? result + 0.5 : result;
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
