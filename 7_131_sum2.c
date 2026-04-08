/*Sums a series of numbers using long variables*/
#include <stdio.h>

int main(void)
{
    long n, sum = 0;
    printf("Write the numbers to be summed: ");
    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is %ld", sum);
    return 0;
}