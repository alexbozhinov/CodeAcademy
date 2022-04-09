#include <stdio.h>
#include "myFunctions.h"

long long int myAtoi(char str[], int length) //function that transforms given string to number
{
    long long int intValue = 0;
    int integers[20] = {0};
    int degrees[20] = {0};

    tenDegrees(degrees, length); //define degrees od 10 till 10^length

    for (int i = 0; i < length; i++)
    {
        integers[i] = (str[i] - '0'); //make each symbol a digit between 0 and 9
    }

    int j = 0;

    for (int i = length - 1; i >= 0; i--)
    {
        intValue += (integers[j] * degrees[i]); //multiplication between the digits and the 10 degrees to make the full number
        j++;
    }

    return intValue;
}

int main()
{
    char str[50] = "123456";
    int length = myStrlen(str);

    printf("The string: %s\n", str);

    long long int intValue = myAtoi(str, length);
    printf("The number: %lld\n", intValue);

    return 0;
}

/*
Упражнение 7.13.* Използвайте for цикъл, за да преобразувате низ от char в
целочислено число. Направете проста реализация на библиотечната
функция atoi(). Знаем, че char '0' = 48 т.е. ако char x = '0', за да получим
числото 0, трябва да извадим int r = x – '0' = 48 – 48 . Ако имаме
последователност от чарове, записана като char s[] = '123' , трябва да
вземем всеки един елемент s[0],s[1], s[2] да го превърнем в число и да го
умножим по основата на бройната система:
*/