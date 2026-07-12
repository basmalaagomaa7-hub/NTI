#include "count.h"

s32_t CountCharacter(char arr[], u8_t size, char ch)
{
    u8_t i = 0;
    s32_t count = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == ch)
        {
            count++;
        }
    }

    return count;
}