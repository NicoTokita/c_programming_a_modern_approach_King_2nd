#include <stdio.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2;



    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d / %2d / %2d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d / %2d / %2d", &month2, &day2, &year2);

    if ((year1 * 365 + month1 * 30 + day1) < (year2 * 365 + month2 * 30 + day2))
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", month1, day1, year1, month2, day2, year2);
    }
    else
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
    }
    
    return 0;
}