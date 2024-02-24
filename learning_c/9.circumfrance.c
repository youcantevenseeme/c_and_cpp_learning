#include <stdio.h>

int main()
{

    double PI = 3.1415926535;
    double radius;
    double circumference;
    double area;

    printf("\nwhat is the radius of your circle?");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\ncircumference: %lf\n",circumference);

    return 0;
};