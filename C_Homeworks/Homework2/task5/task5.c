#include <stdio.h>
#include "task5.h"

int main()
{

    printf("The global variable before changes: %d\n", iGlobal);

    test();
    test();
    test();

    printf("The global variable after changes: %d\n", iGlobal);

    return 0;
}

/*
Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива.
*/