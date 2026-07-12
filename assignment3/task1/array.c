#include <stdio.h>
#include "Array.h"

void ScanDisplayArray(char arr[], U8_t size)
{
    U8_t i = 0;

    for(i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
}