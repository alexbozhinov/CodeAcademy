#include <stdio.h>

int main()
{
    char c;
    int counter = 0;

    printf("Start inputing symbols from the keyboard: \n");

    c = getchar();

    while (c != EOF)
    {
        counter++;
        c = getchar();
    }

    printf("Count of the symbols given to getchar(): %d\n", counter);

    return 0;
}

/*
Пребройте символите, подавани на конзолата, с функцията
getchar(); 
*/