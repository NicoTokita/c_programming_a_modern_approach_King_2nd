#include <stdio.h>

void countdown(int n);

int main(void)
{
    int n;
    printf("Enter remaining time: ");
    scanf("%d", &n);
    int m = n;
    /*Prints a countdown*/
    for(int i = 0; i < m; i++, n--)
    {
        countdown(n);
    }
}

void countdown(int n)
{
    printf("T minus %d and counting\n", n);
}
