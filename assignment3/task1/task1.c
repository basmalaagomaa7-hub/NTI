#include <stdio.h>
#include "array.h"

int main()
{
    U8_t arr[5] = {0};

    printf("Enter 5 characters:\n");

    ScanDisplayArray(arr, 5);

    return 0;
}