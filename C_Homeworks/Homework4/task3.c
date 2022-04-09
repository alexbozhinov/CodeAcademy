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

int main()
{
    char s[50] = "Football";
    printf("The given string: %s\n", s);

    reverse(s);

    printf("The reversed string: %s\n", s);

    return 0;
}

/*
Упражнение 7.14.* Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.
*/