#include <stdio.h>
#include<math.h>

double myAtof(char *s)
{
    int isPoint = 0;
    int isNegative = 0;
    double number = 0.0;
    int i = 0;
    int j = 0;

    while (s[i] != '\0' && ((s[i] >= '0' && s[i] <= '9') || (s[i] == '.') || (s[i] == '-')))
    {
        if (s[i] != '.' && s[i] != '-')
        {
            number = number * 10 + (s[i] - '0');
            if (isPoint == 1)
            {
                j--;
            }
        }

        if (s[i] == '.')
        {
            if (isPoint == 1)
            {
                return 0;
            }
            isPoint = 1;
        }

        if (s[i] == '-')
        {
            isNegative = 1;
        }
        i++;
    }

    number = number * pow(10, j);

    if (isNegative)
    {
        return (-1 * number);
    }
    else
    {
        return number;
    }
}

int main()
{
    char s[50] = "256.125";
    printf("The number: %.10f\n", myAtof(s));

    return 0;
}

/*
Задача 2. Напишете функцията double atof(char *s), която
преобразува стринг в число с десетична запетая.

Задача 3.* Добавете проверка във функцията doble atof(char *s)
дали числото е отрицателно, и ако е, добавете знака.
*/