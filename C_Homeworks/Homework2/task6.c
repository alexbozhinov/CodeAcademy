#include <stdio.h>

int iLocal = 0;

void test()
{
    iLocal++;
}

int main()
{

    printf("The local global variable before changes: %d\n", iLocal);

    test();
    test();
    test();

    printf("How the local global variable have changed: %d\n", iLocal);

    return 0;
}

/*
Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14
*/