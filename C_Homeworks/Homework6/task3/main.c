#include <stdio.h>
#include "functions.h"

int main()
{
    int a;
    printf("Input a: ");
    scanf("%d", &a);

    int b;
    printf("Input b: ");
    scanf("%d", &b);

    int c;
    printf("Input c: ");
    scanf("%d", &c);

    printf("Func1 result: %d\n", func1(a, b));
    printf("Func2 result: %d\n", func2(a, b, c));

    int n;
    printf("Input n: ");
    scanf("%d", &n);

    if (isEven(n) == 1)
    {
        printf("The number %d is even!", n);
    }
    else
    {
        printf("The number %d is odd!", n);
    }

    int dec;
    printf("Input decimal number: ");
    scanf("%d", &dec);
    printf("Transformed binary number: ");
    decToBinary(dec);

    return 0;
}

/*
Задача 3. Напишете функция, която връща резултат (а+в)*4.
Задача 4. Напишете функция, която връща резултат a*2 + b*c.
Задача 5. Напишете програма на С, която чрез функция проверява дали
дадено число е четно или не.
Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.
*/