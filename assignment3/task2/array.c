void SortArray(s32_t arr[], u8_t size)
{
    u8_t i = 0;
    u8_t j = 0;
   // u8_t temp = 0;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                // temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;

                // Second way
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}