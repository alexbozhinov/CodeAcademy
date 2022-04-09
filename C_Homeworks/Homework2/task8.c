#include <stdio.h>
#include <stdlib.h>

void print() //function that prints the menu
{
    printf("==================RENT====================\n\n");
    printf("1. CARAVAN_________________90.00$ per day\n");
    printf("2. CAMPER__________________100.00$ per day\n\n");
}

int main()
{
    double total = 0.00;
    int yesNo = -1;
    int caravanCount = 3;
    int camperCount = 3;
    const double CARAVAN_PRICE = 90.00;
    const double CAMPER_PRICE = 100.00;

    do
    {
        printf("1. Rent\n");
        printf("2. View TOTAL bill\n");
        printf("3. Exit program\n\n");
        printf("Press 1(Rent), 2(TOTAL) or 3(EXIT): ");

        scanf("%d", &yesNo);

        if (yesNo == 1) //user have chosen to rent something
        {
            system("cls");
            print();

            printf("What do you want to rent?\n");
            printf("Press 1(CARAVAN) or 2(CAMPER): ");

            int choice = -1;
            scanf("%d", &choice);

            if (choice == 1) //user have chosen to rent caravans
            {
                int caravanNumber = -1;

                system("cls");
                printf("Input number of caravans: ");

                scanf("%d", &caravanNumber);

                if (caravanNumber > caravanCount) //if the user wants to rent more caravans then we have
                {
                    system("cls");
                    printf("Out of caravans! Try again\n\n");
                }

                else
                {
                    caravanCount -= caravanNumber; //the count of caravans reduces after the user rent some of them
                    int days = 0;

                    printf("Input rent days: ");
                    scanf("%d", &days);
                    system("cls");

                    total += CARAVAN_PRICE * days * caravanNumber; //calculate the sum with the number of rented caravans,
                    //the number of rent days and the price of a caravan
                }
            }

            else if (choice == 2) //user have chosen to rent campers
            {
                int camperNumber = 0;

                system("cls");
                printf("Input number of campers: ");

                scanf("%d", &camperNumber);

                if (camperNumber > camperCount) //if the user wants to rent more campers then we have
                {
                    system("cls");
                    printf("Out of campers! Try again\n\n");
                }

                else
                {
                    camperCount -= camperNumber; //the count of caravans reduces after the user rent some of them
                    int days = 0;

                    printf("Input rent days: ");
                    scanf("%d", &days);
                    system("cls");

                    total += CAMPER_PRICE * days * camperNumber; //calculate the sum with the number of rented campers,
                    //the number of rent days and the price of a camper
                }
            }
        }

        else if (yesNo == 2) //user have chosen to view his bill
        {
            system("cls");
            printf("TOTAL: %lf\n\n", total);
        }

    } while (yesNo == 1 || yesNo == 2); //if user inputs 3 for Exit or something else 
    //we break from the do-while loop

    return 0;
}

/*
Довършете задачата за кемперите от миналия път като добавите
променлива, в която да се събират парите, които клиента дължи на компанията.
Принтирайте резултата. Питайте клиента дали иска още налични продукти.
*/