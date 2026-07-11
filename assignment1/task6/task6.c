#include <stdio.h>
#include "maxchar.h"

int main()
{
    char arr[5]={0};
    char max=0;
    int i=0;

    printf("Enter 5 characters:\n");

    for(i = 0; i < 5; i++)
    {
        scanf(" %c", &arr[i]);
    }

    max = MaxChar(arr, 5);

    printf("Maximum Character = %c", max);

    return 0;
}