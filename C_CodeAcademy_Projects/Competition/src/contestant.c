#include "../lib/contestant.h"

Contestant createContestant(int id)
{
    Contestant contestant;
    contestant.id = id;

    setNmaes(&contestant);
    contestant.rank = 0;
    
    calculateTotal(&contestant);

    return contestant;
}

void contestantDestructor(Contestant *contestant)
{
    stringDestructor(&contestant->firstName);
    stringDestructor(&contestant->secondName);
    stringDestructor(&contestant->lastName);
    vectorDestructorI(&contestant->points);
}

void setNmaes(Contestant *contestant)
{
    char firstName[MAX_NAME_LENGTH] = "";
    stringInput(firstName);
    contestant->firstName = stringConstructor(firstName);

    char secondName[MAX_NAME_LENGTH] = "";
    stringInput(secondName);
    contestant->secondName = stringConstructor(secondName);

    char lastName[MAX_NAME_LENGTH] = "";
    stringInput(lastName);
    contestant->lastName = stringConstructor(lastName);
}

void calculateTotal(Contestant *contestant)
{
    int total = 0;

    for (int i = 0; i < contestant->points.size; i++)
    {
        total += contestant->points.elements[i];
    }

    contestant->totalPoints = total;
}

void printContestant(Contestant *contestant)
{
    printf("Contestant ID = %.2d   ", contestant->id);
    stringOutput(&contestant->firstName);
    printf(" ");
    stringOutput(&contestant->secondName);
    printf(" ");
    stringOutput(&contestant->lastName);

    for (int i = 0; i < 30 - (contestant->firstName.length + contestant->secondName.length + contestant->lastName.length); i++)
    {
        printf(" ");
    }

    printf("\t| Total: ");
    printf("%d", contestant->totalPoints);
    printf("\t Rank: %d\n", contestant->rank);
}

