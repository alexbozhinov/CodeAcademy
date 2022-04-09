#include <stdio.h>
#include "h.h"
int main()
{
    int a;
    printf("Input a: ");
    scanf("%d", &a);

    int b;
    printf("Input b: ");
    scanf("%d", &b);

    printf("Function add: %d\n", add(a, b));
    printf("Function incr: %d\n", incr(a));

    return 0;
}

/*
Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.

*/