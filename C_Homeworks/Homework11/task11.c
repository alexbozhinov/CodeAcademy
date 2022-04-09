#include <stdio.h>

void pointerSort(int arr[], int numberOfElements)
{
    int *head = &arr[0];
    int *tail = &arr[numberOfElements - 1];
    int *unsortedElement = head;

    for (head = &arr[0]; head <= tail - 1; head++)
    {
        for (unsortedElement = head + 1; unsortedElement <= tail; unsortedElement++)
        {
            if (*head > *unsortedElement)
            {

                int temp = *head;
                *head = *unsortedElement;
                *unsortedElement = temp;
            }
        }
    }
}

void inputArray(int array[], int size)
{
    printf("Input array elements: ");

    for (int i = 0; i < size; i++)
    {
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

int main()
{
    int arr[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);
    inputArray(arr, numberOfElements);

    pointerSort(arr, numberOfElements);

    printArray(arr, numberOfElements);

    return 0;
}

/*
Напишете програма, която сортира масив, въведен от клавиатурата,
използвайки указатели.
*/