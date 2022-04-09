#include <stdio.h>
#include "area.h"

const double PI = 3.14;

double circleArea(double radius)
{
    return PI * radius * radius;
}

void area()
{
    double r;
    printf("Enter a radius\n");
    scanf("%lf", &r);
    printf("Circle area is: %lf", circleArea(r));
}