#include <stdlib.h>
#include <stdio.h>
#include <string.h>

union Try
{
    int value;
    double price;
    char str[50];
};

int main()
{
    union Try tr;

    tr.value = 502;
    printf("Value = %d\n", tr.value);

    tr.price = 5000.256;
    printf("Price = %.3f\n", tr.price);

    strcpy(tr.str, "Hello my friend");
    printf("Str = %s\n", tr.str);

    printf("Value = %d\tprice = %f\tstr = %s\n", tr.value, tr.price, tr.str);
    printf("Size = %d\n", sizeof(union Try));

    return 0;
}

/*
Задача 1. Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги изведете
на екрана.
*/