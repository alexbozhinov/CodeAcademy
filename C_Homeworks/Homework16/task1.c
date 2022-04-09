#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        int length = strlen(argv[i]);

        for (int j = 0, k = length - 1; j < k; j++, k--)
        {
            char temp = argv[i][j];
            argv[i][j] = argv[i][k];
            argv[i][k] = temp;
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
Задача 1. Напишете програма, която чете съобщение от няколко думи и го
принтира в обратен ред.
*/