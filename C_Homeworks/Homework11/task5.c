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

    int toFind = 0, flag = 0;
    printf("Input a number to search: ");
    scanf("%d", &toFind);

    ptr = arr;

    for (int i = 0; i < numberOfElements; i++)
    {
        if (*ptr == toFind)
        {
            flag = 1;
            break;
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
    if (flag != 0)
    {
        printf("\nFound!\n");
    }
    else
    {
        printf("\nNot found!\n");
    }
}

/*
 Напишете програма за търсене на определен елемент в даден масив,
използвайки указатели.
*/