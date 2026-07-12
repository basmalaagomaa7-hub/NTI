#include <stdio.h>
#include "convertArray.h"

int main()
{
    u8_t charArr[5] = {0};
    s32_t intArr[5] = {0};
    u32_t i = 0;

    printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf(" %c", &charArr[i]);
    }

    ConvertArray(charArr, intArr, 5);

    printf("Integer Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", intArr[i]);
    }

    return 0;
}