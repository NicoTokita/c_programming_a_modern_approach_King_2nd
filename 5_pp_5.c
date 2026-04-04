#include <stdio.h>
#define PERCENT (1.00f/100.00f)

int main(void)
{   
    float amount = 0.00f, tax = 0.00f;

    printf("Enter the amount of taxable income: $");
    scanf("%f", &amount);

    if (amount < 750)
    {
        tax = amount * 1 * PERCENT; 
    }
    else if (amount < 2250)
    {
        tax = 7.50f + amount * 2 * PERCENT;
    }
    else if (amount < 3750)
    {
        tax = 37.50f + amount * 3 * PERCENT;
    }
    else if (amount < 5250)
    {
        tax = 82.50f + amount * 4 * PERCENT;
    }
    else if (amount < 7000)
    {
        tax = 142.50f + amount * 5 * PERCENT;
    }
    else
    {
        tax = 230.00f + amount * 6 * PERCENT;
    }

    printf("Tax on $%.2f is $%.2f\n", amount, tax);


    return 0;
}