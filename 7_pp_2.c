#include <stdio.h>

int main(void)
{
    int i, n;
    printf("This program prints a table of squares.\n");

    printf("Enter the number of entries in table: ");
    if(scanf("%d", &n) != 1);
    while((getchar() != '\n'));

    for(i = 1; i <= n; i++)
    {
        printf("%-10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {
            printf("Press enter to continue....");

            if(getchar() != '\n')
            {
                printf("Program Terminated >_<\n");
                return 0;
            }
        }
    }
    return 0;
}