#include <stdio.h>
#include "task14.h"

void menu()
{
    int array[100] = {0};
    int size;

    printf("Input number of elements of the array: ");
    scanf("%d", &size);

    inputArray(array, size);

    printf("Array: \n");
    printArray(array, size);

    ascendingSelectionSort(array, size);
    printf("Sorted: \n");
    printArray(array, size);

    int newElement;
    printf("Input new element: ");
    scanf("%d", &newElement);

    addElement(array, size, newElement);
    printArray(array, size + 1); //why not changes??
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

void ascendingSelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        mySwap(&arr[minIdx], &arr[i]);
    }
}

void addElement(int array[], int size, int newElement)
{
    int position = 0;
    array[size] = newElement;

    while (array[position] <= newElement)
    {
        position++;
    }

    for (int i = size; i > position; i--)
    {
        int temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
    }
    
    size++; //why??
}