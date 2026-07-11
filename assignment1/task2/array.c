void SortArray(int arr[], int size)
{
    int i=0;
    int j=0;
    int temp=0;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                //temp = arr[j];
                //arr[j] = arr[j + 1];
                //arr[j + 1] = temp;
                //the 2nd way 
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
}