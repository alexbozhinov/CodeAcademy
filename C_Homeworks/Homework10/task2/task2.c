#include <stdio.h>

int main()
{
    char str[1000] = "";
    char c = '0';
    char *head = &str[0];
    int len = 0;

    printf("Input a string: ");

    for (int i = 0; i < 1000; i++)
    {
        c = getchar();

        if (c != '\n')
        {
            *head = c;
            head++;
            len++;
        }
        else
        {
            break;
        }
    }

    *head = '\0';

    head = &str[len - 1];

    printf("The reverted string: ");

    for (; head >= &str[0]; head--)
    {
        putchar(*head);
    }

    return 0;
}

/*
Задача 2. Напишете програма, която чете съобщение от клавиатурата, след
което го принтира в обратен ред, използвайки адресна аритметика
*/