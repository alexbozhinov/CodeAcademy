#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = tolower(c);
        }
        putchar(c);
    }

    return 0;
}

/*
Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки.
*/