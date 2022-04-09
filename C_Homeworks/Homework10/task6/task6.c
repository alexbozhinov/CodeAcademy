#include <stdio.h>

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

int linear_search(const int a[], int n, int key)
{
    const int *head = &a[0];
    const int *tail = &a[n - 1];
    int position = 0;

    for (; head <= tail; head++)
    {
        if (*head == key)
        {
            return position;
        }

        position++;
    }
    return -1;
}

int main()
{
    int arr[100] = {0};
    int numberOfElements = 0;

    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);
    inputArray(arr, numberOfElements);

    int key = 0;
    printf("Input key to search: ");
    scanf("%d", &key);

    int position = linear_search(arr, numberOfElements, key);

    printArray(arr, numberOfElements);

    if (position >= 0)
    {
        printf("The key was found at position: %d!\n", position);
    }
    else
    {
        printf("The key was not found in the array!\n");
    }

    return 0;
}

/*
Задача 6. Напишете функцията int linear_search(const int a[], int n, int key);
използвайки адресна аритметика без инкрементиращи променливи.
*/