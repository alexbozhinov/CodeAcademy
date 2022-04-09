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

    printf("Input array: ");

    for (; head <= tail; head++)
    {
        scanf("%d", &(*head));
    }

    for (head = &arr[1]; head <= tail; head += 2) //start from index 1 - first odd
    {
        sum += *head;
    }

    printArray(arr, head, tail);

    printf("Sum of array elements at odd position: %d", sum);

    return 0;
}

/*
Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на нечетна позиция. Масива да бъде въведен от потребителя.
Разпечатайте в конзолата масива и сумата.
*/