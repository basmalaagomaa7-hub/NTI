#include "maxchar.h"

char MaxChar(u8_t arr[], u32_t size)
{
    u32_t i = 0;
    u8_t max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}