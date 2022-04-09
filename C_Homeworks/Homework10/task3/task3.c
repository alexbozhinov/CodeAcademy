#include<stdio.h>

int main()
{
    char str[1000] = "";
    char c = '0';
    char *head = &str[0];
    int len = 0;

    printf("Input string: ");

    for (int i = 0; i < 1000; i++)
    {
        c = getchar();

        if (c != '\n')
        {
            *head = c;
            head++;
            len++;
        }
        else
        {
            break;
        }
    }

    *head = '\0';

    char *tail = &str[len - 1]; //start from 0, last element at position len-1
    head = &str[0];
    int isPalindrome = 0;

    while (head <= tail)
    {
        if (*head == *tail)
        {
            isPalindrome++;
        }
        head++;
        tail--;
    }

    if ((len % 2 != 0 && isPalindrome == (len / 2) + 1) || (len % 2 == 0 && isPalindrome == len / 2))
    {
        printf("YES, the string is a palindrome!\n");
    }
    else
    {
        printf("NO, the string is not a palindrome!\n");
    }

    return 0;
}

/*
Задача 3. Използвайте Задача 2, за да напишете програма, която проверява
дали съобщението не е палиндром. Палиндром е съобщение, в което
буквите от ляво на дясно са същите като от дясно на ляво.
*/