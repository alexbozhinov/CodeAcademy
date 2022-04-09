#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char temp = s[i]; //change sy,bols using two iterators from begin to end and from end to begin and additional temporary variable
        s[i] = s[j];
        s[j] = temp;
    }
}

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
        if (c == '\n')
        {
            str[i + 1] = '\0';
            reverse(str);
            print(str);
            i = 0;
        }
        else
        {
            str[i] = c;
            i++;
        }
    }

    printf("%s", str);

    return 0;
}

/*
Упражнение 10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.
*/