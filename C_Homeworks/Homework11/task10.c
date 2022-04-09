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
    head = str;
    char *tail = &str[len - 1];

    for (head = str, tail = &str[len - 1]; head <= tail; head++, tail--)
    {
        char temp = *head;
        *head = *tail;
        *tail = temp;
    }

    printf("Reverted string: %s\n", str);
    return 0;
}

/*
Напишете програма, която обръща стринг, въведен от клавиатурата,
използвайки указатели.
*/