#include <stdio.h>

int main()
{
    char c;
    int counter = 0;

    printf("Start inputing symbols from your keyboard: \n");

    c = getchar();

    while (c != EOF)
    {
        if (c == '\n')
            counter++;
        c = getchar();
    }

    printf("Count of the new lines: %d\n", counter);

    return 0;
}

/*Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/