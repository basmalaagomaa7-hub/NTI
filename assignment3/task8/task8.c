#include <stdio.h>
#include "reverse.h"

int main()
{
    s32_t arr[5] = {0};
    //n8_t arr[5] = {0};

    u32_t i = 0;

    printf("Enter 5 numbers:\n");
    //printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ReverseArray(arr, 5);
    //ReverseCharArray(arr, 5);

    printf("Reversed Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}