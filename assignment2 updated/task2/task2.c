#include <stdio.h>
#include "STD_TYPES.h"
#include "String.h"

int main()
{
    char str[50]={0};
    S32_t count=0;

    printf("Enter a word: ");
    scanf("%s", str);

    modifyString(str, &count);

    printf("Modified String = %s\n", str);
    printf("Vowel Count = %d\n", count);

    return 0;
}