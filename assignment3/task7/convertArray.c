#include "convertArray.h"

void ConvertArray(u8_t charArr[], s32_t intArr[], u32_t size)
{
    u32_t i = 0;

    for(i = 0; i < size; i++)
    {
        intArr[i] = charArr[i];
    }
}