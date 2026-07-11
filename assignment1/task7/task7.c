#include <stdio.h>
#include "convertArray.h"

int main()
{
    char charArr[5]={0};
    int intArr[5]={0};
    int i=0;

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