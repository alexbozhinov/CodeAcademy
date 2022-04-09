#include <stdio.h>
#define SIZE 10

int main()
{
    int arr1[SIZE];
    int arr2[SIZE];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int i = 0;

    printf("Enter %d array elements: ", SIZE);

    while (ptr1 < &arr1[SIZE])
    {
        scanf("%d", &(*ptr1));
        ptr1++;
    }

    printf("Enter %d array elements: ", SIZE);

    while (ptr2 < &arr2[SIZE])
    {
        scanf("%d", &(*ptr2));
        ptr2++;
    }

    ptr1 = arr1;
    ptr2 = arr2;

    for (int i = 0; i < SIZE; i++)
    {
        int temp = *(ptr1 + i);
        *(arr1 + i) = *(ptr2 + i);
        *(arr2 + i) = temp;
    }

    printf("Elements in first array are: ");
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", *(arr1 + i));
    }

    printf("\nElements in second array are: ");

    for (i = 0; i < SIZE; i++)
    {
        printf("%d, ", *(arr2 + i));
    }
}
/*
Напишете програма, която разменя елементите на два еднакви по размер
масива, използвайки указатели.
*/