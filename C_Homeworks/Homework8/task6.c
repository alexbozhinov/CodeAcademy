#include <stdio.h>
#include <string.h>

void reverse(char src[])
{

    for (int i = 0, j = strlen(src) - 1; i < j; i++, j--)
    {
        char temp = src[i];
        src[i] = src[j];
        src[j] = temp;
    }
}

void itoa(int n, char s[])
{
    int i = 0;

    do
    {
        s[i] = (n % 10) + '0';
        n /= 10;
        i++;
    } while (n != 0);

    reverse(s);
}

int main()
{
    int n = 652;
    char s[50];

    itoa(n, s);
    printf("Int to String: %s", s);

    return 0;
}

/*
Задача 8. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi).
*/