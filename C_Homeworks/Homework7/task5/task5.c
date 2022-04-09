#include <stdio.h>
#include "task5.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    printf("The unique elements: \n");
    uniqueElements(array, numberOfElements);
}

void inputArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Input new element: ");
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int size)
{
    printf("Array elements: [ ");

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            printf("%d, ", array[i]);
        }
        else
        {
            printf("%d ]\n", array[i]);
        }
    }
}

void uniqueElements(int array[], int size)
{
    int counter[100] = {0};

    for (int i = 0; i < size; i++)
    {
        counter[array[i]]++;
    }

    for (int i = 0; i < size; i++)
    {
        if (counter[i] > 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
