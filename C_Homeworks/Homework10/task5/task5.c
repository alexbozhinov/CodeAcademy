#include <stdio.h>

void sort(int a[], int n)
{
    int i = 0, j = 0, temp = 0;

    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

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

    //sort(arr, numberOfElements);
    pointerSort(arr, numberOfElements);

    printArray(arr, numberOfElements);

    return 0;
}

/*
Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
*/