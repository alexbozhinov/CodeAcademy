#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Input interval From and To: \n");

    printf("From: ");
    int from = 0;
    scanf("%d", &from);

    printf("To: ");
    int to = 0;
    scanf("%d", &to);

    generateRandomArray(array, numberOfElements, from, to);

    printf("Biggest number in the array is: %d\n", biggestElement(array, numberOfElements));

    printArray(array, numberOfElements);
}

void generateRandomArray(int array[], int size, int from, int to)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = (rand() % (to - from + 1)) + from;
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