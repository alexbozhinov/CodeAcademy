#include <stdio.h>

int main()
{
    char c;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            continue;
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}

/*
Задача 8. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете шпациите и табулациите в стринга
*/