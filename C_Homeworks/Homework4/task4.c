#include <stdio.h>
#include "myFunctions.h"

void itoa(int n, char s[])
{
    int i = 0;

    do
    {
        s[i] = (n % 10) + '0'; //every time get the last digit of number and transform it to char symbol
        n /= 10;               //every time take away the last digit of the number
        i++;

    } while (n != 0); //until we transform all digits of the number

    s[i] = '\0'; //the last symbol of the string should be '\0'

    reverse(s); //use the function from myFunctions.h
}

int main()
{
    char s[50] = "";
    int n = 123456;

    printf("The integer number: %d\n", n);

    itoa(n, s);

    printf("The string after transformation: %s\n", s);

    return 0;
}

/*
Упражнение 7.15.* Използвайте do-while цикъл, за да напишете функцията
void itoa(int n, char s[]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива с ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0'. За да вземете следващото число, трябва да
разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията от
Упражнение 7.14. , за да обърнем низа.
*/