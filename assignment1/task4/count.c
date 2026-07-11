int CountNumber(int arr[], int size, int number)
{
    int i=0;
    int count = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            count++;
        }
    }

    return count;
}