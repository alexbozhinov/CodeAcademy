#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;

    printf("Input left number: ");
    scanf("%d", &number1);

    printf("Input right number: ");
    scanf("%d", &number2);

    int *p1 = &number1;
    int *p2 = &number2;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    printf("Number1: %d\n", number1);
    printf("Number2: %d\n", number2);

    return 0;
}

/*
Напишете програма, която разменя две числа, използвай указатели.
*/