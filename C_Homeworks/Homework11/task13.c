#include <stdio.h>

int main()
{

    int arr[100] = {0};
    int *ptr = arr;

    int numberOfElements = 0;
    printf("Input number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Input array elements: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }

    ptr = arr;

    int min = *ptr;
    int max = *ptr;

    for (int i = 0; i < numberOfElements; i++)
    {
        if (*ptr < min)
        {
            min = *ptr;
        }
        if (*ptr > max)
        {
            max = *ptr;
        }
        ptr++;
    }

    ptr = arr;
    printf("Array elements: ");

    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }

    printf("\nMinimal: %d", min);
    printf("\nMaximal: %d", max);

    return 0;
}

/*
Напишете програма, която намира максималния и минималния елементи
в масив, използвай указатели.
*/