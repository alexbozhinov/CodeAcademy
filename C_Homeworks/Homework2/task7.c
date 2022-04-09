#include <stdio.h>

double circleArea(double dRadius, double PI) //function that returns the circle area by given radius and PI
{
    return dRadius * dRadius * PI;
}

double elipseArea(double A, double B, double PI) //function that returns the elipse area by given parameters and PI
{
    return A * B * PI;
}

int main()
{
    const double PI = 3.14159;
    double dRadius1 = 1.0;
    double dRadius2 = 1.5;
    double dRadius3 = 13.0;

    printf("Circle area 1: %lf\n", circleArea(dRadius1, PI));
    printf("Circle area 2: %lf\n", circleArea(dRadius2, PI));
    printf("Circle area 3: %lf\n\n", circleArea(dRadius3, PI));

    printf("Elipse area: %lf\n", elipseArea(5.0, 12.0, PI));

    return 0;
}

/*
Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13.
*/

/*
 Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)
*/