#include <stdio.h>
#include "functions.h"

void menu()
{
    printf("Ax^2 + Bx + C = 0\n");

    double a;
    printf("Input a: ");
    scanf("%lf", &a);

    double b;
    printf("Input b: ");
    scanf("%lf", &b);

    double c;
    printf("Input c: ");
    scanf("%lf", &c);

    double D = findDiscriminant(a, b, c);
    printf("The discriminant is: %lf\n", D);

}

double findDiscriminant(double a, double b, double c)
{
    return add(numberSquare(b), -4 * mult(a, c));
}

double numberSquare(double number)
{
    return number * number;
}

double mult(double number1, double number2)
{
    return number1 * number2;
}

double add(double number1, double number2)
{
    return number1 + number2;
}