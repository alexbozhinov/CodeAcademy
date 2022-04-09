#include <stdio.h>

int main()
{

    printf("\nFirst figure: \n\n");
    int colNumbers = 11;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < colNumbers; j++)
        {
            printf(" # ");
        }

        colNumbers -= 2;
        printf("\n");

        for (int k = 0; k <= i; k++)
        {
            printf("   ");
        }
    }

    printf("\nSecond figure: \n\n");

    colNumbers = 1;

    for (int i = 0; i < 6; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf("   ");
        }

        for (int j = 0; j < colNumbers; j++)
        {
            printf(" # ");
        }

        colNumbers += 2;
        printf("\n");
    }

    printf("\nThird figure: \n\n");

    colNumbers = 1;

    for (int i = 0; i < 6; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf("   ");
        }

        for (int j = 0; j < colNumbers; j++)
        {
            printf(" # ");
        }

        colNumbers += 2;
        printf("\n");
    }

    colNumbers = 9;

    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("   ");
        }

        for (int j = 0; j < colNumbers; j++)
        {
            printf(" # ");
        }
        
        colNumbers -= 2;
        printf("\n");
    }

    return 0;
}

/*
Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга:

a)
#  #  #  #  #  #  #  #  #
   #  #  #  #  #  #  #
      #  #  #  #  #
         #  #  #
            #

b)
            #
         #  #  #
      #  #  #  #  #
   #  #  #  #  #  #  #
#  #  #  #  #  #  #  #  #

c)
            #
         #  #  #
      #  #  #  #  #
   #  #  #  #  #  #  #
#  #  #  #  #  #  #  #  #
   #  #  #  #  #  #  #
      #  #  #  #  #
         #  #  #
            #
*/