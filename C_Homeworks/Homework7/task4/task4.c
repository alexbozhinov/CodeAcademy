#include <stdio.h>
#include "task4.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    printf("The reversed array: \n");
    printReversedArray(array, numberOfElements);
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

void printReversedArray(int array[], int size)
{
    printf("Array elements: [ ");

    for (int i = size - 1; i >= 0; i--)
    {
        if (i != 0)
        {
            printf("%d, ", array[i]);
        }
        else
        {
            printf("%d ]\n", array[i]);
        }
    }
}
