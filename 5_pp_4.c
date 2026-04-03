#include <stdio.h>


int main(void)
{
    float wind_speed = 0.00f;
    
    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed);

    if(wind_speed < 1.00f)
    {
        printf("Wind type: Calm\n");
    }
    else if (wind_speed < 4.00f)
    {
        printf("Wind type: Light air\n");
    }
    else if (wind_speed < 28.00f)
    {
        printf("Wind type: Breeze\n");
    }
    else if (wind_speed < 48.00f)
    {
        printf("Wind type: Gale\n");
    }
    else if (wind_speed <= 63.00f)
    {
        printf("Wind type: Storm\n");
    }
    else
    {
        printf("Wind type: Hurricane\n");
    }
    
    
    return 0;
}