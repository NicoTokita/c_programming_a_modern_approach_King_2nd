#include <stdio.h>
#include <stdbool.h>


bool is_prime(int n);
int main(void)
{
    long long int n;
    printf("Enter number to be prime-tested: ");
    scanf("%lld", &n);
    if(is_prime(n))
    {
        printf("Prime.\n");
    }
    else
    {
        printf("Not Prime.\n");
    }
}

bool is_prime(int n)
{
    int divisor;

    if (n <= 1)
    {
        return false;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++)
    {
        if(n % divisor == 0)
        {
            return false;
        }
    }
    return true;

}
