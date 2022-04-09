#include <stdio.h>
#include <string.h>

void print(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char c;
    char str[1000] = "";
    int i = 0;
 

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' && i > 80)
        {
            str[i] = '\0';
            print(str);
            i = 0;
        }
        else if (c == '\n' && i <= 80)
        {
            i = 0;
        }
        else
        {
            str[i] = c;
            i++;
        }
    }

    return 0;
}

/*
Задача 7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.
*/
