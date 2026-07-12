#include "Math.h"

S32_t Factorial(S32_t num)
{
    if(num == 0 || num == 1)
    {
        return 1;
    }

    return num * Factorial(num - 1);
}

S32_t Fibonacci(S32_t num)
{
    if(num == 0)
    {
        return 0;
    }

    if(num == 1)
    {
        return 1;
    }

    return Fibonacci(num - 1) + Fibonacci(num - 2);
}