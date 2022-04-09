#include <stdio.h>

int main()
{
    char c;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            putchar(c);
        }
        if (c == '\n')
        {
            putchar(c);
        }
    }

    return 0;
}

/*
5. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF. Текстът има букви и цифри.
Принтирайте с putchar() само въведените букви. Използвайте
условните оператори, за да принтирате с putchar() само малките букви
от латинската азбука а - z и големите букви A-Z.
*/