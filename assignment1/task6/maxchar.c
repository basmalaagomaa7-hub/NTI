char MaxChar(char arr[], int size)
{
    int i=0;
    char max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}