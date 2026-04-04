#include <stdio.h>

int main(void)
{

    int mark = 0, digit1, digit2;
    printf("Enter a numerical grade: ");
    scanf("%d", &mark);

    digit1 = (mark % 1000 - mark % 100) / 100;
    digit2 = (mark % 100 - mark % 10) / 10;

    switch (digit2)
    {
        case 0:
            
            if (digit1 == 1)
            {
                printf("Letter Grade: A");
            }
            else
            {
                printf("Letter Grade: F");
            }
            break; 
        case 1: case 2: case 3: case 4: case 5:
            printf("Letter Grade: F");
            break;
        case 6:
            printf("Letter Grade: D");
            break;
        case 7:
            printf("Letter Grade: C");
            break;
        case 8:
            printf("Letter Grade: B");
            break;
        case 9:
            printf("Letter Grade: A");
            break;
    }
}