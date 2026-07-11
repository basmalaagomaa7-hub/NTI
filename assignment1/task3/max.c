int MaxArray(int arr[], int size)
{
    int i=0;
    int max = arr[0];
    //int j=0;
    //int temp=0;

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
    // for(i = 0; i < size - 1; i++)
    //   {
    //  for(j = 0; j < size - 1 - i; j++)
    //  {
    // if(arr[j] > arr[j + 1])
    //       {
    //           temp = arr[j];
    //           arr[j] = arr[j + 1];
    //           arr[j + 1] = temp;
    //      }
      //  }
    //}

    //return arr[size - 1];
}