#include <stdio.h>

int main()
{
    char c;

    int digitCounter = 0;
    int lettercounter = 0;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || c >= 'a' && c <= 'z')
        {
            lettercounter++;
        }
        else if (c >= '0' && c <= '9')
        {
            digitCounter++;
        }
        else
        {
            continue;
        }
    }

    printf("Count of letters: %d, Count of digits: %d.", lettercounter, digitCounter);

    return 0;
}

/*
Задача 6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF. Текстът има
букви и цифри. Пребройте колко са въведените букви и колко са
въведените цифри. Определeте броя на цифрите в стринга, като
използвате оператор continue.
*/