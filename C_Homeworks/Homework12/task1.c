#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[])
{
    int (*calc)(int a, int b) = NULL;

    if (argc == 4)
    {
        if (*argv[2] == '+')
        {
            calc = add;
        }
        else if (*argv[2] == '-')
        {
            calc = minus;
        }
        else if (*argv[2] == '.')
        {
            calc = mut;
        }
        else if (*argv[2] == '/')
        {
            calc = dev;
        }

        int a = atoi(argv[1]);
        int b = atoi(argv[3]);

        int value = (*calc)(a, b);

        printf("Value = %d\n", value);
    }

    else if (argc > 5)
    {
        printf("Too many arguments!\n");
    }

    else
    {
        printf("Expect more arguments!\n");
    }

    return 0;
}

/*
Задача 1. Направете две функции и извикайте желаната функция с указател
към функция, съобразно знака, подаден от командния ред:
Пример: а.exe 20 + 3
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int ( * pfCalc ) ( int, int ) = NULL;
Задача 2. Добавете към горния код функции за умножение и деление.
*/