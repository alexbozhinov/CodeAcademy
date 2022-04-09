#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

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

    printf("Search number: ");
    int toSearch = 0;
    scanf("%d", &toSearch);

    int checker = ifExists(array, numberOfElements, toSearch);

    if (checker > 0)
    {
        printf("The number %d exists in the array!\n", toSearch);
    }
    else
    {
        printf("The number %d doesn't exists in the array!\n", toSearch);
    }

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

int ifExists(int array[], int size, int searched)
{
    int boolean = -1;

    for (int i = 0; i < size; i++)
    {
        if (array[i] == searched)
        {
            boolean = 1;
            break;
        }
    }

    return boolean;
}