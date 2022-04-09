#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Byte
{
    int number;
    unsigned int bit1 : 1;
    unsigned int bit2 : 1;

    union Union
    {
        char name[20];
        double price;
    };
};

int main()
{
    struct Byte byte;

    byte.number = 500;
    printf("Number = %d\n", byte.number);

    byte.bit1 = 1;
    byte.bit2 = 0;
    printf("bit1 = %u, bit2 = %u\n", byte.bit1, byte.bit2);

    strcpy(byte.name, "Aleks");
    printf("Union name = %s\n", byte.name);

    byte.price = 200.54;
    printf("Union price = %.2f\n", byte.price);

    printf("Struct: number = %d\tbit1 = %u\tbit2 = %u\tname = %s\tprice = %.2f\n", byte.number, byte.bit1, byte.bit2, byte.name, byte.price);
    printf("Structure size = %d\n", sizeof(struct Byte));

    return 0;
}

/*
Задача 3. Дефинирайте структура, която да се състои от цели числа, битови
полета и union. Попълнете всички елементи на структурата, като използвате
операторите “.” и “->” за достъп до елементите. Разпечатайте отделните
елементи, както и размера на структурата.
*/