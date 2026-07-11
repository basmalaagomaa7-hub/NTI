int CountCharacter(char arr[], int size, char ch)
{
    int i=0;
    int count = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == ch)
        {
            count++;
        }
    }

    return count;
}