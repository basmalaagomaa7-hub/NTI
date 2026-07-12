#include <stdio.h>
#include "max.h"

int main()
{
    s32_t arr[5] = {0};
    u8_t i = 0;
    s32_t max = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = MaxArray(arr, 5);

    printf("Maximum Number = %d", max);

    return 0;
}