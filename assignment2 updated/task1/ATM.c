#include <stdio.h>
#include "STD_TYPES.h"

void processTransaction(F32_t *balance, U8_t type)
{
    static U8_t transactions = 0;
    F32_t amount = 0;

    do
    {
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%hhd", &type);

        switch(type)
        {
            case 1:
                printf("Enter amount: ");
                scanf("%f", &amount);
                *balance = *balance + amount;
                transactions++;
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f", &amount);
                *balance = *balance - amount;
                transactions++;
                break;

            case 3:
                printf("Balance = %.2f\n", *balance);
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Wrong Choice\n");
        }

    }while(type != 4);

    printf("Number of Transactions = %d\n", transactions);
}