#include <stdio.h>
#include "task12.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    printArray(array, numberOfElements);
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
    printf("Indexes: ");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d", i);
    }
    printf("\nElements:|");

    for (int i = 0; i < size; i++)
    {
        printf("\t%d|", array[i]);
    }
    printf("\n");
}
