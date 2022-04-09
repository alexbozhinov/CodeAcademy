#include "task4.h"

struct Animal *inputAnimal(int size)
{
    struct Animal *animals = (struct Animal *)malloc(size * sizeof(struct Animal));

    for (int i = 0; i < size; i++)
    {
        printf("Input animal type: ");
        scanf("%s", &animals[i].type);
        printf("Input animal age: ");
        scanf("%d", &animals[i].age);
        printf("Input animal name: ");
        scanf("%s", &animals[i].name);
    }

    return animals;
}

void printAnimal(struct Animal *animals, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Animal %d: type = %s, age = %d, name = %s\n", i, animals[i].type, animals[i].age, animals[i].name);
    }
}

struct Farm inputFarm(struct Animal *animals)
{
    struct Farm farm = {animals};
}

void printFarm(struct Farm *farm, int animalCount)
{
    printf("Animals in farm: \n");
    printAnimal(farm->animals, animalCount);
}

void menu()
{
    int count = 0;
    printf("Input animal count: ");
    scanf("%d", &count);

    struct Animal *animals = inputAnimal(count);
    struct Farm farm = inputFarm(animals);

    printFarm(&farm, count);

    free(animals);
}