#include <stdio.h>

int main(void)
{
    float number_of_shares, price_per_share, my_commission, rival_commission;

    printf("Enter the number of shares: ");
    scanf("%f", &number_of_shares);

    printf("Enter price per share: $");
    scanf("%f", &price_per_share);

    // The only two required input variables have been taken
    
    // This will compute my commission
    if (price_per_share < 2500.00f)
    {
        my_commission = 30.00f + (1.7f / 100.00f) * price_per_share;
    }
    else if (price_per_share >= 2500.00f && price_per_share <= 6250.00f)
    {
        my_commission = 56.00f + (0.66f / 100.00f) * price_per_share;
    }
    else if (price_per_share >= 6250.00f && price_per_share < 20000.00f)
    {
        my_commission = 76 + (0.34f / 100.00f) * price_per_share;
    }
    else if (price_per_share >= 20000.00f && price_per_share < 50000.00f)
    {
        my_commission = 100.00f + (0.22f / 100.00f) * price_per_share;
    }
    else if (price_per_share >= 50000.00f && price_per_share < 500000.00f)
    {
        my_commission = 155.00f + (0.11f / 100.00f) * price_per_share;
    }
    else
    {
        my_commission = 255.00f + (0.09f / 100.00f) * price_per_share;
    }

    if (my_commission < 39.00f)
    {
        my_commission = 39.00f;
    }

   

    // This will compute my rival's commission. Apparently, the rival calculates his commission based on the number of shares, not the value per share.
    if (number_of_shares < 2000.00f)
    {
        rival_commission = 33.00f + 0.03f * number_of_shares;
    }
    else
    {
        rival_commission = 33.00f + 0.02f * number_of_shares;
    }


    printf("My commission is => $%.2f\n", my_commission);
    printf("My rival's commission is = > $%.2f\n", rival_commission);

    return 0;
}