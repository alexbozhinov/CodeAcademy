#include <stdio.h>

int getline(char s[], int lim)
{
    int counter = 0;
    while (s[counter] != lim)
    {
        counter++;
    }
    return counter-1;
}

int main()
{
    char c = ' ';
    char str[100];
    int lim = 48;
    int len = 0;
    char delimiter= ' ';

    printf("Input delimiter: ");
    scanf("%c", &delimiter);
    lim = (int)(delimiter);

    for (int i = 0; i < 100; i++)
    {
        c = getchar();
        if (c != '*')
        {
            str[len] = c;
            len++;
        }
        else
        {
            break;
        }
    }

    int length = getline(str, lim);
    printf("Length of row: %d", length);

    return 0;
}

/*
Задача 9*. Напишете функция int getline(char s[],int lim),
която чете ред в s[] и връща дължината му.
*/