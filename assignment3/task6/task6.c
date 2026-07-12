#include <stdio.h>
#include "maxchar.h"

int main()
{
    u8_t arr[5] = {0};
    u8_t max = 0;
    u32_t i = 0;

    printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf(" %c", &arr[i]);
    }

    max = MaxChar(arr, 5);

    printf("Maximum Character = %c", max);

    return 0;
}