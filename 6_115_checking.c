#include <stdio.h>

int main(void)
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** Mahfuz's Checkbook Balancing Program ***\n");

    for(;;)
    {   
        printf("Commands: 0 => Clear | 1 => Credit | 2 => Debit | 3 => Balance | 4 => Exit\n\n");
        printf("Enter Command: ");
        scanf("%1d", &cmd);

        switch (cmd)
        {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter credit amount: ");
                scanf("%f", &credit);
                balance += credit;
                printf("Your balance after credit: %.2f\n", balance);
                break;
            case 2:
                printf("Enter debit amount: ");
                scanf("%f", &debit);
                balance -= debit;
                printf("Your balance after debit: %.2f\n", balance);
                break;
            case 3:
                printf("Your Balance is: %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
            printf("Commands: 0 => Clear | 1 => Credit | 2 => Debit | 3 => Balance | 4 => Exit\n\n");
        }
    }
}