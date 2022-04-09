#include <stdio.h>
#include <stdlib.h>

typedef char *string;

typedef struct
{
    string name;
    int id;
} key_t;

void print(key_t *key)
{
    printf("Name = %s, id = %d;\n", key->name, key->id);
}

int main()
{

    key_t *key_tab = malloc(5 * sizeof(key_t));

    for (int i = 0; i < 5; i++)
    {
        key_tab[i].id = i;
        key_tab[i].name = malloc(50 * sizeof(char));
        key_tab[i].name = "Aleks";
    }

    for (int i = 0; i < 5; i++)
    {
        print(&key_tab[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        free(key_tab[i].name);
    }

    free(key_tab);

    return 0;
}

/*
Задача 7. Напишете масив от структури наречен key_tab[ ], като използвате
тази, дефинирана в горното упражнение - потребителски тип key_t, която
съдържа символен низ и число. Инициализирайте масива с всички ключови
думи на С, като заделяте паметта за всяка ключова дума динамично.
Принтирайте масива.
*/