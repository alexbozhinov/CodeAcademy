#include <stdio.h>

int strcmp(char left[], char right[])
{
    char *l = left;
    char *r = right;
    int equal = 0;
    int len = 0;

    while (*l != '\0' && *r != '\0')
    {
        if (*l == *r)
        {
            equal++;
        }
        l++;
        r++;
        len++;
    }

    if (equal == len)
    {
        return 1;
    }

    return -1;
}

int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";

    printf("Are they equal: %d\n", strcmp(str1, str2));

    return 0;
}

/*
Напишете функция-аналог на стандартната С функция strcmp(), като
използвате указатели
*/