#include <stdio.h>

int multTo(int to)
{
    if (to == 1)
    {
        return 1;
    }
    else
    {
        return to * multTo(to - 1);
    }
}

int main()
{
    int mult = 1;

    for (int i = 1; i < 6; i++)
    {
        mult *= i;
    }

    printf("Mult iterative = %d\n", mult);

    int multRec = multTo(6);
    printf("Mult recursive = %d\n", multRec);

    return 0;
}

/*
Задача 5. Напишете функция, която изчислява произведението на
числата от 1 до 30.
Задача 6. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.
*/