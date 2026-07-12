
s32_t MaxArray(s32_t arr[], u8_t size)
{
    u8_t i = 0;
    s32_t max = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;

    /* Second Way (Using Bubble Sort)

    u8_t j = 0;
    s32_t temp = 0;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr[size - 1];

    */
}