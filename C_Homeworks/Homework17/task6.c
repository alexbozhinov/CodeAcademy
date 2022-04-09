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
    key_t key = {"", 0};
    printf("Input id: ");
    scanf("%d", &key.id);

    key.name = (string)malloc(50 * sizeof(char));
    key.name = "Aleks";

    print(&key);
    free(key.name);

    return 0;
}

/*
Задача 6. Напишете структура с потребителски тип key_t, която съдържа
символен низ и число. Създайте променлива от новия тип, като
инициализирате символния низ с динамично заделена памет за него.
Принтирайте съдържанието на структурата.
*/