#include <stdio.h>

int main()
{
    char c;
    int spaceCounter = 0;
    int tabCounter = 0;
    int lineCounter = 0;

    printf("Start inputing symbols from your keyboard: \n");

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            lineCounter++;
        }

        else if (c == '\t')
        {
            tabCounter++;
        }

        else if (c == ' ')
        {
            spaceCounter++;
        }
        else
        {
            continue;
        }
    }

    printf("Count of the new lines: %d, Count of the tabs: %d, Count of the spaces: %d.\n",
           lineCounter, tabCounter, spaceCounter);

    return 0;
}

/*
3.Напишете програма, която преброява шпациите, табулациите и
новите редове.
*/