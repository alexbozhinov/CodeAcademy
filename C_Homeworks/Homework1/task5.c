#include <stdio.h>
#include <stdlib.h>

void print()
{
    printf("==================RENT====================\n\n");
    printf("1. CARAVAN_________________90.00$ per day\n");
    printf("2. CAMPER__________________100.00$ per day\n");
}

int main()
{
    double total = 0.00;
    int yesNo = -1;
    const int CARAVAN_COUNT = 3;
    const int CAMPER_COUNT = 3;
    const double CARAVAN_PRICE = 90.00;
    const double CAMPER_PRICE = 100.00;

    do
    {
        printf("Do you want to rent?\n");
        printf("Prss 1(YES) or 0(NO): ");
        
        scanf("%d", &yesNo);

        if (yesNo == 1)
        {
            print();
            printf("Input 1 for caravan or 2 for camper: ");

            int choice = -1;
            scanf("%d", &choice);

            if (choice == 1)
            {
                total += CARAVAN_PRICE;
            }
            else if (choice == 2)
            {
                total += CAMPER_PRICE;
            }

            system("cls");

        }
        else if (yesNo == 0)
        {
            printf("TOTAL: %lf$", total);
        }

    } while (yesNo!=0);

    return 0;
}

/*
Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата.
*/