#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int copy[SIZE];
    int *ptr = arr;
    int i = 0;

    printf("Enter %d array elements: ", SIZE);

    while (ptr < &arr[SIZE])
    {
        scanf("%d", &(*ptr));
        ptr++;
    }

    ptr = arr;
    
    for (int i = 0; i < SIZE; i++)
    {
        *(copy + i) = *ptr;
        ptr++;
    }

    printf("Elements in array are: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", *(copy + i));
    }
}

/*
Напишете програма, която копира един масив в друг, използвайки
указатели.
*/