#include <stdlib.h>
#include <stdio.h>

typedef double *dVector;

int main()
{

    printf("Input size: ");
    int size = 0;
    scanf("%d", &size);

    dVector vector = (dVector)malloc(size * sizeof(double));

    for (int i = 0; i < size; i++)
    {
        scanf("%lf", &vector[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%.2f ", vector[i]);
    }

    free(vector);

    return 0;
}

/*
Задача 5. Дефинирайте потребителски тип към масив. Инициализирайте
масива, изведете на конзолата.
*/