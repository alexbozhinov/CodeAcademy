#include <stdio.h>
#include <stdlib.h>

void printMenu()
{
    printf("-------=======PRODUCTS=======-------\n\n");
    printf("1. TOMATOE..................4.50$ kg\n");
    printf("2. FLOUR....................1.80$ kg\n");
    printf("3. YOGHURT..................0.50$ cup\n");
    printf("4. ICE CREAM................0.60$ funnel\n");
    printf("5. CANDIES..................1.50$ kg\n");
    printf("6. LOLLIPOP.................0.15$ \n");
}

int main()
{
    double total = 0.0;
    int yesNo = -1;
    const double TOMATOE_PRICE = 4.50;
    const double FLOUR_PRICE = 1.80;
    const double YOGHURT_PRICE = 0.50;
    const double ICECREAM_PICE = 0.60;
    const double CANDIES_PRICE = 1.50;
    const double LOLLIPOP_PRICE = 0.15;

    do
    {
        printf("Do you want to add more products?\n");
        printf("Prss 1(YES) or 0(NO): ");
        scanf("%d", &yesNo);

        if (yesNo == 1)
        {
            printMenu();
            printf("Input product number: ");
            int choice = -1;
            scanf("%d", &choice);

            if (choice == 1)
            {
                total += TOMATOE_PRICE;
            }
            else if (choice == 2)
            {
                total += FLOUR_PRICE;
            }
            else if (choice == 3)
            {
                total += YOGHURT_PRICE;
            }
            else if (choice == 4)
            {
                total += ICECREAM_PICE;
            }
            else if (choice == 5)
            {
                total += CANDIES_PRICE;
            }
            else if (choice == 6)
            {
                total += LOLLIPOP_PRICE;
            }

            system("cls");
        }

        else if (yesNo == 0)
        {
            printf("TOTAL: %lf$", total);
        }
    } while (yesNo != 0);

    return 0;
}

/*
Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
*/