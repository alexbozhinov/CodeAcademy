#include <stdio.h>

typedef long long int llInt;

int main()
{
    llInt longInt = 55123548;
    printf("longInt = %llu\n", longInt);
    printf("sizeof(longInt) = %d\n", sizeof(llInt));

    return 0;
}

/*
Задача 2. Създайте нов потребителски тип към тип long long int. Използвайте го
във функцията printf, отпечатайте размера.
*/