#include <stdio.h>

void printArray(int array[], int *head, int *tail)
{
    if (head > tail)
    {
        printf("[ ]\n");
        return;
    }
    printf("Array elements: [ ");

    for (head = &array[0]; head <= tail; head++)
    {
        if (head < tail)
        {
            printf("%d, ", *head);
        }
        else
        {
            printf("%d ]\n", *head);
        }
    }
}

int main()
{
    int arr[100] = {0};

    int numberOfElements = 0;
    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    int *head = &arr[0];
    int *tail = &arr[numberOfElements - 1];
    int sum = 0;

    printf("Input array elements: ");

    for (; head <= tail; head++)
    {
        scanf("%d", &(*head));
    }

    for (head = &arr[0]; head <= tail; head++)
    {
        sum += *head;
    }

    printArray(arr, &arr[0], tail);

    printf("Sum of all elements: %d", sum);

    return 0;
}

/*
Задача 4. Напишете функцията за сумиране елементите на масив,
използвайки адресна аритметика вместо инкрементиращa променливa.
*/