#include <stdio.h>

typedef unsigned int uInt;

typedef struct
{
    uInt delimiter;
    uInt denominator;
} Rational;

void print(const Rational r)
{
    printf("r = %u/%u\n", r.delimiter, r.denominator);
}

int main()
{

    Rational r = {2, 5};
    print(r);

    return 0;
}

/*
Задача 1. Дефинирайте структура като потребителски тип.Инициализирайте
членовете на структурата, използвайки новия потребителски тип. Отпечатайте.
*/