#include <stdio.h>
#include "task13.h"

void menu()
{
    int array1[100] = {0};
    int size1 = 0;

    int array2[100] = {0};
    int size2 = 0;

    int array[200] = {0};

    printf("Input number of elements of array 1: ");
    scanf("%d", &size1);

    inputArray(array1, size1);

    printf("Input number of elements of array 2: ");
    scanf("%d", &size2);

    inputArray(array2, size2);

    arrayJoin(array, array1, size1, array2, size2);

    printArray(array1, size1);
    printArray(array2, size2);

    descendingSelectionSort(array, size1 + size2);
    printArray(array, size1 + size2);
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

void mySwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void descendingSelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIdx])
            {
                maxIdx = j;
            }
        }
        mySwap(&arr[maxIdx], &arr[i]);
    }
}

void arrayJoin(int newArray[], int array1[], int size1, int array2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        newArray[i] = array1[i];
    }

    for (int i = size1, j = 0; i < size1 + size2; i++, j++)
    {
        newArray[i] = array2[j];
    }
}