#include <stdio.h>
#include "task6.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    int toCheck = 0;
    printf("Check how many times appends the nunmber: ");
    scanf("%d", &toCheck);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    printf("The number %d appends %d times in the array!\n", toCheck, appendCount(array, numberOfElements, toCheck));
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

int appendCount(int array[], int size, int toCheck)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == toCheck)
        {
            counter++;
        }
    }

    return counter;
}
