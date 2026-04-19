#include <stdio.h>

double average(double a, double b);

int main(void)
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("the average of %g and %g is %g\n", x, y, average(x,y));
    printf("the average of %g and %g is %g\n", y, z, average(z,y));
    printf("the average of %g and %g is %g\n", x, z, average(x,z));

    return 0;

}

double average(double a, double b)
{
    return ((a + b)/2);
}
