#include <stdio.h>

typedef int *iPtr;

int main()
{
    int number = 50;
    iPtr i = &number;

    printf("number = %d\n", *i);

    return 0;
}

/*
Задача 3. Дефинирайте потребителски тип към указател.Създайте променлива,
насочете указателя към нея, използвайки новия потребителски тип.
*/