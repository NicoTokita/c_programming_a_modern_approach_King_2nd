#include <stdio.h>

int main(void)
{
    int numbers;
    printf("How many numbers do you want to reverse?: ");
    scanf("%d", &numbers);

    if(numbers <= 0)
        {
            printf("How about you go home now?\n");
            return 1;
        }
    
    int set[numbers];

    printf("Enter the numbers to be reversed: ");
    for(int i = 0; i < numbers; i++)
    {
        scanf("%d", &set[i]);
    }
    
    printf("Numbers reversed: \n");
    for(int i = numbers - 1; i >= 0; i--)
    {
        printf("%d", set[i]);
    }
    printf("\n");

    return 0;

    
}