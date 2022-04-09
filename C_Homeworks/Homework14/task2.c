#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum Type
{
    INT = 1,
    STRING = 2
};

union Try
{
    int value;
    char str[50];
};

void print(union Try *try, enum Type type)
{
    if (type == INT)
    {
        printf("Value = %d\n", try->value);
    }
    else if (type == STRING)
    {
        printf("Str = %s\n", try->str);
    }
    else
    {
        printf("Error!\n");
    }
}

int main()
{
    union Try try;

    enum Type type = STRING;

    if (type == INT)
    {
        try.value = 15;
        print(&try, type);
    }
    else if (type == STRING)
    {
        strcpy(try.str, "Aleks");
        print(&try, type);
    }

    return 0;
}

/*
Задача 2. Напишете обединение от число и низ, както и изброим тип за
съдържанието на обединението. Напишете функция, която получава
указател към обединението и изброимия тип и извежда съответно низ или
число.
*/