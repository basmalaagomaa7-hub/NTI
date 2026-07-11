#include <stdio.h>
#include "count.h"

int main()
{
    int arr[5]={0};
    int i=0;
    int number=0;
    int count=0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &number);

    count = CountNumber(arr, 5, number);

    printf("The number is repeated %d times", count);

    return 0;
}