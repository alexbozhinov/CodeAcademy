#include <stdio.h>
#include "task1.h"

void menu()
{
    //const int MAX_SIZE = 50;

    int originalArray[50] = {0};
    int coppiedArray[50] = {0};

    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(originalArray, numberOfElements);

    digitMultArray(originalArray, coppiedArray, numberOfElements, 2);

    printf("Original array: \n");
    printArray(originalArray, numberOfElements);

    printf("Coppied array: \n");
    printArray(coppiedArray, numberOfElements);
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

void digitMultArray(int original[], int copy[], int size, int multiplier)
{
    for (int i = 0; i < size; i++)
    {
        copy[i] = original[i] * multiplier;
    }
}
