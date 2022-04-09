#include <stdio.h>

void my_swap(int *a, int *b);

int main()
{
    int number1 = 5;
    int number2 = 10;

    int *a = &number1;
    int *b = &number2;

    my_swap(a, b);

    printf("Number1: %d, Number2: %d\n", *a, *b);

    return 0;
}

void my_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

/*
Задача 10. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).
*/