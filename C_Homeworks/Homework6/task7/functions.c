#include <stdio.h>
#include <math.h>
#include "functions.h"

int NOD(int number1, int number2)
{
    while (number1 != number2)
    {
        if (number1 > number2)
            number1 -= number2;
        else
            number2 -= number1;
    }

    return number1;
}

int NOK(int number1, int number2)
{
    return (number1 / NOD(number1, number2)) * number2;
}

float myFabs(float number)
{
    if (number < 0)
    {
        number *= -1;
    }

    return number;
}

float mySqrt(float number)
{
    if (check(number) == -1)
    {
        number = myFabs(number);
    }
    return sqrt(number);
}

int check(float number)
{
    if (number < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void menu()
{
    int number1;
    int number2;
    float number3;

    printf("Input number1: ");
    scanf("%d", &number1);

    printf("Input number2: ");
    scanf("%d", &number2);

    printf("NOK of %d and %d = %d\n", number1, number2, NOK(number1, number2));

    printf("Input number: ");
    float number;
    scanf("%f", &number);
    printf("Square root of %f is %f\n", myFabs(number), mySqrt(number));
}