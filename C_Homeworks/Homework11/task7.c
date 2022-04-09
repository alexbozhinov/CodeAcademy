#include <stdio.h>

int main()
{
    char str1[1000] = "";
    char str2[1000] = "";
    char c = '0';
    char *head = str1;
    int len1 = 0, len2 = 0;

    printf("Input the left string: ");

    for (int i = 0; i < 1000; i++)
    {
        c = getchar();

        if (c != '\n')
        {
            *head = c;
            head++;
            len1++;
        }
        else
        {
            break;
        }
    }

    *head = '\0';

    head = str2;

    printf("Input the right string: ");

    for (int i = 0; i < 1000; i++)
    {
        c = getchar();

        if (c != '\n')
        {
            *head = c;
            head++;
            len2++;
        }
        else
        {
            break;
        }
    }

    *head = '\0';

    head = &str1[len1];
    char *leftHead = str2;

    while (*leftHead != '\0')
    {
        *head = *leftHead;
        head++;
        leftHead++;
    }

    *head = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}

/*
Напишете програма, която конкатери два стринга, използвайки указатели.
*/