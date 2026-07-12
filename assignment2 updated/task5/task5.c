#include <stdio.h>
#include "Math.h"

int main()
{
    S32_t number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial = %d\n", Factorial(number));
    printf("Fibonacci = %d\n", Fibonacci(number));

    return 0;
}