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
        }
        else
        {
            break;
        }
    }

    *head = '\0';
    head = str;

    while (*head != '\0')
    {
        len++;
        head++;
    }

    printf("Length = %d\n", len);

    return 0;
}

/*
Напишете програма, която намира дължината на въведен от клавиатурата
стринг, използвайки указатели.
*/