#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        int length = strlen(argv[i]);
        char *head = argv[i];
        char *tail = argv[i];

        while (length > 1)
        {
            tail++;
            length--;
        }

        while (head < tail)
        {
            char temp = *head;
            *head = *tail;
            *tail = temp;
            head++;
            tail--;
        }
    }

    for (int i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n");

    return 0;
}

/*
Задача 2. Пренапишете горния код като работите с аритметика с указатели.
*/