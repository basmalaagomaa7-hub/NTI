#include <stdio.h>
#include "reverse.h"

int main()
{
    int arr[5]={0};
    //char arr[5]={0};
    int i=0;

    printf("Enter 5 numbers:\n");
//printf("Enter 5 characters:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ReverseArray(arr, 5);
    //ReverseCharArray(arr, 5);

    printf("Reversed Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}