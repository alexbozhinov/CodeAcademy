#include <stdio.h>
#include <string.h>

void reverse(char src[], char dest[])
{

    for (int i = 0, j = strlen(src) - 1; i < j; i++, j--)
    {
        char temp = src[i];
        src[i] = src[j];
        src[j] = temp;
        dest[i] = src[i];
        dest[j] = src[j];
    }
}

int main()
{
    char src[50] = "Hello World!";
    char dest[50] = "";

    reverse(src, dest);

    printf("String src: %s\n", src);
    printf("String dest: %s\n", dest);

    return 0;
}

/*
Задача 7. Напишете функция void reverse(char src[], char dest[]),
която обръща низа char src[ ], като същевременно го копира в char dest[].
Принтирайте двата низа на екрана, за да могат да бъдат сравнени.

*/