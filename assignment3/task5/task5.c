#include <stdio.h>
#include "count.h"

int main()
{
    u8_t arr[5] = {0};
    u8_t ch = 0;
    u8_t i = 0;
    s32_t count = 0;

    printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Enter the character to search: ");
    scanf(" %c", &ch);

    count = CountCharacter(arr, 5, ch);

    printf("The character is repeated %d times", count);

    return 0;
}