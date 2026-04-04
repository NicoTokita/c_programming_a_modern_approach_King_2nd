#include <stdio.h>

int main(void)
{
    int i0, i1, i2, i3;

    // I will first check which one is bigger among i0 and i1, then which one is bigger among i2 and i3, then comapare the bigger ones and smaller ones to get the final result.
    int maxg1, ming1, maxg2, ming2, largest, smallest;

    printf("Enter four Integers separated by space: ");
    scanf("%d %d %d %d", &i0, &i1, &i2, &i3);

    if (i0 > i1)
    {
        maxg1 = i0;
        ming1 = i1;
    }
    else
    {
        maxg1 = i1;
        ming1 = i0;
    }

    if (i2 > i3)
    {
        maxg2 = i2;
        ming2 = i3;
    }
    else
    {
        maxg2 = i3;
        ming2 = i2;
    }

    if (maxg1 > maxg2)
    {
        largest = maxg1;
    }
    else
    {
        largest = maxg2;
    }

    if (ming1 < ming2)
    {
        smallest = ming1;
    }
    else
    {
        smallest = ming2;
    }

    printf("The largest number is %d\nThe smallest number is %d\n", largest, smallest);

    return 0;
}