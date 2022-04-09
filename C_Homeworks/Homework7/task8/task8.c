#include <stdio.h>
#include "task8.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    int oddArray[100] = {0};
    int evenArray[100] = {0};

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    printf("The array with odd numbers!\n");
    oddArrayElements(array, oddArray, numberOfElements);

    printf("The array with even numbers!\n");
    evenArrayElements(array, evenArray, numberOfElements);
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
    if (size == 0)
    {
        printf("[ ]\n");
        return;
    }
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

void oddArrayElements(int originalArray[], int oddArray[], int size)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (originalArray[i] % 2 != 0)
        {
            oddArray[j] = originalArray[i];
            j++;
        }
    }
    printArray(oddArray, j);
}

void evenArrayElements(int originalArray[], int evenArray[], int size)
{
    int j = 0;

    for (int i = 0; i < size; i++)
    {
        if (originalArray[i] % 2 == 0)
        {
            evenArray[j] = originalArray[i];
            j++;
        }
    }
    printArray(evenArray, j);
}