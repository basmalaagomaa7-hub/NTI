#include <stdio.h>
#include "count.h"

int main()
{
    s32_t arr[5] = {0};
    s32_t number = 0;
    s32_t count = 0;
    u8_t i = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &number);

    count = CountNumber(arr, 5, number);

    printf("Count = %d", count);

    return 0;
}