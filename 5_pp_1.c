#include <stdio.h>

int main(void)
{   
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // of course this is not the best way to do this, I am sure even though I have no knowledge of the proper way yet.

    if (number >= 0 && number <= 9)
    {
        printf("The number %d has 1 digit.\n");
    }
    else if (number >= 10 && number <= 99)
    {
        printf("The number %d has 2 digits.\n", number);
    }
    else if (number >= 100 && number <= 999)
    {
        printf("The number %d has 3 digits.\n");
    }
    else if (number >= 1000 && number <= 9999)
    {
        printf("The number %d has 4 digit.\n");
    }
    else
    {
        printf("The number is out of range.\n");
    }






    return 0;


}