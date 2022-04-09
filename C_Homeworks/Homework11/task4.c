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
    ptr--;
    printf("ptr: %d\n", *ptr);

    for (int i = 0; arr + i <= ptr; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *ptr;
        *ptr = temp;
        ptr--;
    }

    ptr = arr;
    printf("Array elements: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
}

/*
Напишете програма, която обръща местата на елементите в един масив,
използвайки указатели.
*/