#include <stdio.h>
#include "STD_TYPES.h"
#include "Sort.h"

int main()
{
    S32_t arr[5]={0};
    U8_t i=0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortArray(arr, 5);

    printf("Sorted Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}