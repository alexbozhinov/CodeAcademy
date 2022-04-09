#include <stdio.h>

void bin(int number) //function to print binnary numbers
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}

int bitAt(int number, int index) //functions that returns the bit at given index
{
    return (number << index) & 1;
}

int clearBit(int number, int index) //function that removes bit at given index
{
    return number & ~(1 << index);
}

int setBit(int number, int index) //function that sets bit at given index
{
    return number | (1 << index);
}

int reverseBit(int number, int index) //function that makes 0 to 1 or 1 to 0 at given position
{
    if (number & (1 << index))
    {
        return number & ~(1 << index);
    }
    else
    {
        return number | (1 << index);
    }
}

int main()
{
    /*
    int a = 8;
    int idx = 2;
    printf("The bit is %d\n", bitAt(a, idx));
    */
    /*
    int number = 5;
    int idx = 3;

    bin(number);
    int newNumber = clearBit(number, idx);
    bin(newNumber);
    */

    int number = 9;
    int index = 2;

    bin(number);
    int newNumber = reverseBit(number, index);
    bin(newNumber);

    return 0;
}

/*
2) Създайте функция bitAt. Функцията получава
параметър число и индекс. Тя връща стойността на бита
на съответния индекс.

3) Създайте функция clearBit. Тя получава като
параметър число и индекс, и прави на нула бита на
съответния индекс в числото.

4) Създайте функция setBit. Тя получава следните
параметри - число и индекс. Функцията трябва да "вдига"
бита на съответния индекс в числото (под "вдига" ще
разбираме да му присвои стойност 1).

5) Създайте функция reverseBit. Тя получава следните
параметри - число и индекс. Като резултат функцията
обръща бита на съответната позиция в числото
(съответно от 0 на 1 или от 1 на 0).
*/