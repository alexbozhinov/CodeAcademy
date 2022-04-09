#include <stdio.h>
#include <stdlib.h>

typedef int (*fPtr)(int, int);

int add(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int mut(int a, int b)
{
    return a * b;
}

int dev(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        return -1;
    }
}

int main()
{
    fPtr ptr = NULL;
    int a = 0;
    int b = 0;
    char sign = ' ';

    scanf("%d%c%d", &a, &sign, &b);

    if (sign == '+')
    {
        ptr = add;
    }
    else if (sign == '-')
    {
        ptr = minus;
    }
    else if (sign == '*')
    {
        ptr = mut;
    }
    else if (sign == '/')
    {
        ptr = dev;
    }

    int result = (ptr)(a, b);

    printf("Result = %d\n", result);

    return 0;
}

/*
Задача 4. Дефинирайте тип указател към функция, която изпълнява
определена операция върху две целочислени променливи. Дефинирайте
функции, които изпълняват операциите +, -, *, /. Използвайте новия тип, за да
извикате всяка една от функциите.
*/