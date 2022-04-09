#include <stdio.h>
#include "task9.h"

void menu()
{
    int array[100] = {0};
    int numberOfElements = 0;

    int oddArray[100] = {0};
    int evenArray[100] = {0};

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    inputArray(array, numberOfElements);

    int N = 0;
    printf("Reverse to: ");
    scanf("%d", &N);

    printf("The original array: \n");
    printArray(array, numberOfElements);

    revert(array, numberOfElements, N);
    printf("The reversed array: \n");
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

void revert(int array[], int size, int N)
{
    for (int i = 0; i < N; i++)
    {
        int last = array[0];

        for (int j = 1; j < size; j++)
        {
            array[j - 1] = array[j];
        }

        array[size - 1] = last;
    }
}
