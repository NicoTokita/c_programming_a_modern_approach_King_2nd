#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter Date (mm/dd/yy): ");
    scanf("%2d / %2d / %2d", &month, &day, &year);

    printf("Dated this ");

    switch (day)
    {
        case 1: case 21:
            printf("%dst day of ", day);
            break;
        case 2: case 22:
            printf("%dnd day of ", day);
            break;            
        case 3: case 23:
            printf("%drd day of ", day);
            break;
        default:
            printf("%dth day of ", day);
            break;  
    }

    switch (month)
    {
        case 1:
            printf("January, 20%d\n", year);
            break;
        case 2:
            printf("February, 20%d\n", year);
            break;
        case 3:
            printf("March, 20%d\n", year);
            break;
        case 4:
            printf("April, 20%d\n", year);
            break;
        case 5:
            printf("May, 20%d\n", year);
            break;
        case 6:
            printf("June, 20%d\n", year);
            break;
        case 7:
            printf("July, 20%d\n", year);
            break;
        case 8:
            printf("August, 20%d\n", year);
            break;
        case 9:
            printf("September, 20%d\n", year);
            break;
        case 10:
            printf("October, 20%d\n", year);
            break;
        case 11:
            printf("November, 20%d\n", year);
            break;
        case 12:
            printf("December, 20%d\n", year);
            break;
        default:
            printf("your imaginary month, 69%d\n", year);
            break;
    }





}