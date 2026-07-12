#include "STD_TYPES.h"

void swap(S32_t *a, S32_t *b)
{
    S32_t temp=0;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(S32_t arr[], U8_t size)
{
    U8_t i=0;
    U8_t j=0;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}