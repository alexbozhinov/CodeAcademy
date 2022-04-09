#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Animal
{
    char type[20];
    int age;
    char name[20];
};

struct Farm
{
    struct Animal *animals;
};

struct Animal *inputAnimal(int size);

void printAnimal(struct Animal *animals, int size);

struct Farm inputFarm(struct Animal *animals);

void printFarm(struct Farm *farm, int animalCount);

void menu();
