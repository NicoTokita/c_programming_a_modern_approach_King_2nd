#include <stdio.h>

int main(void)
{
    int hour, minute;


    printf("Enter a 24 hour time: ");
    scanf("%2d : %2d", &hour, &minute);

    // The space before and after : allows just a little flexibility for the user. The user is still expected to 
    // write like hh:mm but if he types hh :mm or hh : mm, they will also work, along with hh:mm.

    if (hour > 12 && hour < 24)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour - 12, minute);
    }
    else if (hour == 12)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
    }
    else if (hour < 12 && hour >= 0)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    }
    else
    {
        printf("Please enter a valid time.\n");
    }


    return 0;
}