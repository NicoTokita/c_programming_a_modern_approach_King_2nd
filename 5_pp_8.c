#include <stdio.h>

int main(void)
{
    int input_hour, input_minute, min_since_midnight;

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d : %d", &input_hour, &input_minute);

    min_since_midnight = input_hour * 60 + input_minute;

    /*
    There are 8 departure times, given in order from earliest to latest.
    I will convert the times into minutes (after midnight).
    8:00 a.m. is 480 minutes
    9:43 a.m. is 583 mins
    11:19 a.m. is 679 mins
    12:47 p.m. is 767 mins
    2:00 p.m. is 840 mins
    3:45 p.m. is 945 mins
    7:00 p.m. is 1140 mins
    9:45 p.m. is 1305 mins

    Now we can use these as a range in if else statements.
    */

    if (min_since_midnight <= 480)
    {
        printf("Next closest departrure time: 8:00 a.m.\nArrial time: 10:16 a.m.\n");
    }
    else if (min_since_midnight <= 583)
    {
        printf("Next closest departrure time: 9:43 a.m.\nArrial time: 11:52 a.m.\n");
    }
    else if (min_since_midnight <= 679)
    {
        printf("Next closest departrure time: 11:19 a.m.\nArrial time: 1:31 p.m.\n");
    }
    else if (min_since_midnight <= 767)
    {
        printf("Next closest departrure time: 12:47 p.m.\nArrial time: 3:00 p.m.\n");
    }
    else if (min_since_midnight <= 840)
    {
        printf("Next closest departrure time: 2:00 p.m.\nArrial time: 4:08 p.m.\n");
    }
    else if (min_since_midnight <= 945)
    {
        printf("Next closest departrure time: 3:45 p.m.\nArrial time: 5:55 p.m.\n");
    }
    else if (min_since_midnight <= 1140)
    {
        printf("Next closest departrure time: 7:00 p.m.\nArrial time: 9:20 p.m.\n");
    }
    else if (min_since_midnight <= 1305)
    {
        printf("Next closest departrure time: 9:45 p.m.\nArrial time: 11:58 p.m.\n");
    }
    else
    {
        printf("Next closest departrure time: 8:00 a.m.\nArrial time: 10:16 a.m.\n");
    }

    return 0;
}