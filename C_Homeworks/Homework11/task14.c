#include <stdio.h>

int main()
{
    int n = 0;
    int *factorial;

    printf("Input n: ");
    scanf("%d", &n);

    *factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        *factorial *= i;
    }

    printf("%d! = %d\n", n, *factorial);

    return 0;
}

/*
 Напишете програма, която да изчисли факториал на дадено число,
използвайки указатели.
*/