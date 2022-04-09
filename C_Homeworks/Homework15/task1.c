#include <stdio.h>

#define PI 3.14
#define R 15.0
#define area(A, B) A *A *B

int main()
{
    printf("Area of cirlce with radius = %.2f is: %.2f\n", R, area(PI, R));

    return 0;
}

/*
Задача 1. Дефинирайте константи PI, Е, и други с помощта на макроси.
Използвайте ги в кода.
*/