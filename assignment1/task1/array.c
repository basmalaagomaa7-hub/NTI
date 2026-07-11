#include <stdio.h>

void ScanDisplayArray(char arr[], int size)
{
    int i=0;

    for(i = 0; i < size; i++)
    {
        scanf(" %c",&arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        printf("%c ",arr[i]);
    }
}