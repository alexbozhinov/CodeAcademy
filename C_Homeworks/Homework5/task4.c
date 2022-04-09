#include <stdio.h>

int main()
{
    char c;
    char str[1000] = "";
    int i = -1;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        i++;
        if (str[i - 1] == ' ' && c == ' ')
        {
            i--;
            continue;
        }
        else
        {
            str[i] = c;
        }
    }
    str[i] = '\0';

    printf("%s", str);

    return 0;
}

/*
4. Напишете програма, която копира входа си на изхода, като
замества всеки низ повече от една шпации, с една единствена
шпация.
*/