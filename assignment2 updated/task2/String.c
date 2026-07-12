#include "STD_TYPES.h"

void modifyString(char *str, S32_t *count)
{
    *count = 0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u')
        {
            (*count)++;
        }

        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}