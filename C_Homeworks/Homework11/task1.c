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
    printf("Array elements: ");
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
}

/*
Напишете програма, която въвежда и принтира елементитe на масив,
използвайки указател.
*/