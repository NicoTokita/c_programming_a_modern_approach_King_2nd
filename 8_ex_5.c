#include <stdio.h>

int main(void)
{
    int n;
    printf("How many fibonacci do you want in your series? ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("How about you go home?");
    }
    int fib_numbers[n];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    for(int i = 2; i < n; i++)
    {

        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i -2];
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", fib_numbers[i]);
    }
}