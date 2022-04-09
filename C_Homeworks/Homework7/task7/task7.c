#include <stdio.h>
#include "task7.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    printf("The minial element of the array is: %d!\n", smallestElement(array, numberOfElements));
    printf("The maximal element of the array is: %d!\n", biggestElement(array, numberOfElements));
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

int biggestElement(int array[], int size)
{
    int biggest = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > biggest)
        {
            biggest = array[i];
        }
    }

    return biggest;
}

int smallestElement(int array[], int size)
{
    int smalest = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] < smalest)
        {
            smalest = array[i];
        }
    }

    return smalest;
}