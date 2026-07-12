#include <stdio.h>
#include "Array.h"

int main()
{
    s32_t arr[5] = {0};
    u8_t i = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    SortArray(arr, 5);

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}