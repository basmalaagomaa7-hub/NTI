#include "reverse.h"

void ReverseArray(s32_t arr[], u32_t size)
//void ReverseCharArray(u8_t arr[], u32_t size)
{
    u32_t i = 0;
    s32_t temp = 0;
    //u8_t temp = 0;

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}