#include <stdio.h>

#define DEBUG "DEFINED"

#ifdef DEBUG
#define DEBUG_PRINT(x) printf x
#else
#define PRINT(x) printf x
#endif

int main()
{
    int integer = 10;
    double doubleNum = 15.7;
    char str[50] = "Hello, C!";

    DEBUG_PRINT(("int: %d; double: %.2f; string: %s\n", integer, doubleNum, str));
    //PRINT(("Hello, C!\n"));

    return 0;
}

/*
Задача 3. Реализирайте условна компилация в зависимост от макрос DEBUG
*/