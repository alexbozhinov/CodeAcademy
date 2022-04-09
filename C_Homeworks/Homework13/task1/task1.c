#include <stdlib.h>
#include <stdio.h>
#include "task1.h"

void print(struct Car *car)
{
    printf("Car: model = %s, year = %d, price = %.2f\n", car->model, car->year, car->price);
}

void menu()
{
    struct Car car = {"", 0, 0.0};

    printf("input car model: ");
    scanf("%s", &car.model);
    printf("input car year: ");
    scanf("%d", &car.year);
    printf("input car price: ");
    scanf("%lf", &car.price);

    print(&car);
}