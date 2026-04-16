/* Checks numbers for repeated digits*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
        {
            break;
        }

        digit_seen[digit] = true;

        n /= 10;
    }

    if (n > 0)
    {
        printf("Repeated Digit\n");
    }
    else
    {
        printf("No Repeated Digit");
    }
    return 0;
}