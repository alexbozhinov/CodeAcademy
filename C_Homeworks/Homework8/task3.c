#include <stdio.h>
#include<string.h>

void copy(char *to, char *from)
{
    int length = strlen(from);
    for (int i = 0; i < length; i++)
    {
        to[i] = from[i];
    }
    to[length] = '\0';
}

int main()
{
    char *from = "Hello World!";
    char str[100] = "";
    char *to = str;

    copy(to, from);

    printf("%s", to);

    return 0;
}

/*
Задача 4. Направете функцията :
void copy(char *to, char *from), която копира една
последователност от символи в друга. Разпечатайте на екрана и
двете последователности, за да могат да бъдат сравнени.

*/