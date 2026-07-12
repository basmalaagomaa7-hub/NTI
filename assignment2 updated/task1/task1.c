#include <stdio.h>
#include "STD_TYPES.h"
#include "ATM.h"

int main()
{
    F32_t balance = 0;
    U8_t type = 0;

    processTransaction(&balance, type);

    return 0;
}