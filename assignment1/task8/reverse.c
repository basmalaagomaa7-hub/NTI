void ReverseArray(int arr[], int size)
//void ReverseCharArray(char arr[], int size)
{
    int i=0;
    int temp=0;
    //char temp=0

    for(i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}