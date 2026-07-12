#include "count.h"

s32_t CountNumber(s32_t arr[], u8_t size, s32_t number)
{
    u8_t i = 0;
    s32_t count = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            count++;
        }
    }

    return count;
}