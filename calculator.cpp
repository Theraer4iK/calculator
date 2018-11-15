#include "calculator.h"

int Calculator::Add (double a, double b)
{
    double result = a + b;
    return result > 0 ? result + 0.5 : result;
}
