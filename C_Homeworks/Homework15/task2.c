#include <stdio.h>

#define swap(t, x, y) \
    {                 \
        t temp;       \
        temp = x;     \
        x = y;        \
        y = temp;     \
    }

int main()
{
    int x = 0;
    int y = 0;

    printf("Input x: ");
    scanf("%d", &x);

    printf("Input y: ");
    scanf("%d", &y);

    printf("x = %d, y= %d\n", x, y);

    swap(int, x, y);

    printf("x = %d, y= %d\n", x, y);
}

/*
Задача 2. Напишете макрос swap(t, x, y), койтo променя местата на двата
аргумента от тип t.
*/