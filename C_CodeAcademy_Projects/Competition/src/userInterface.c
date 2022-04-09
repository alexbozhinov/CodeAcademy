#include "../lib/userInterface.h"

void printMainMenu(Competition *competition)
{
    system("CLS");

    printf("***********************************\n");
    printf("*                                 *\n");
    printf("*   MISS SCHOOLGORL COMPETITOON   *\n");
    printf("*                                 *\n");
    printf("***********************************\n\n\n");

    printf("1. Show ranklist\n");
    printf("2. Import ranklist\n");
    printf("3. Exit\n\n");
}

void mainMenu(Competition *competition)
{
    int choice = 0;

    do
    {
        printMainMenu(competition);

        printf("Input choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            showRanklistMenu(competition);
            break;
        case 2:
            importRanklistMenu(competition);
            break;
        case 3:
            return;
            break;
        default:
            printf("Undefined operation!\n");
        }
    } while (choice < 1 || choice > 3);
}

void showRanklistMenu(Competition *comp)
{
    system("cls");

    printf("***********************************\n");
    printf("*                                 *\n");
    printf("*         R-A-N-K--L-I-S-T        *\n");
    printf("*                                 *\n");
    printf("***********************************\n\n\n");

    for (int i = 0; i < comp->contestants.size; i++)
    {
        printContestant(&comp->contestants.elements[i]);
    }

    int choice = 0;

    do
    {
        printf("\n\n\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        mainMenu(comp);
        break;
    case 2:
        return;
        break;
    }
}

void importRanklistMenu(Competition *comp)
{
    importCompetition(comp);

    int choice = 0;

    do
    {
        system("cls");
        printf("Ranklist imported to ranklist.csv\n");
        printf("1. Back\n");
        printf("2. Exit\n");
        printf("\nInput choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 2);

    switch (choice)
    {
    case 1:
        mainMenu(comp);
        break;
    case 2:
        return;
        break;
    }
}