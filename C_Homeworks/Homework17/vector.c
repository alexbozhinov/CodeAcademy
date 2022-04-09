#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "vector.h"

Vector vectorConstructor(const unsigned int capacity)
{
    Vector vec;

    vec.size = 0;
    vec.capacity = capacity;
    vec.elements = (vecType *)malloc(sizeof(vecType) * vec.capacity);

    return vec;
}

void vectorDestructor(Vector *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
}

unsigned int size(Vector *vec)
{
    return vec->size;
}

unsigned int getVectorCapacity(Vector *vec)
{
    return vec->capacity;
}

vecType *getElements(Vector *vec)
{
    return vec->elements;
}

void vectorInput(Vector *vec, int numberOfElemens)
{
    for (int i = 0; i < numberOfElemens; i++)
    {
        vecType element = 0;
        scanf("%d", &element);
        pushBack(vec, element);
    }
}

void vectorOutput(Vector *vec)
{
    if (vec->size == 0)
    {
        printf("[ ]\n");
        return;
    }

    if (vec->size == 1)
    {
        printf("[ %d ]\n", vec->elements[0]);
        return;
    }

    printf("[ ");

    for (int i = 0; i < vec->size - 1; i++)
    {
        printf("%d, ", vec->elements[i]);
    }

    printf("%d ]\n", vec->elements[vec->size - 1]);
}

void updateVectorCapacity(Vector *vec)
{
    if (vec->size >= vec->capacity)
    {
        vec->capacity += vec->capacity / 2 + 1;
    }
}

void clear(Vector *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
    vec->elements = NULL;
}

void resize(Vector *vec, unsigned int number)
{
    if (number == 0)
    {
        clear(vec);
    }
    else
    {
        if (number > vec->capacity)
        {
            vec->capacity = number;
            vecType *tempElements = (vecType *)malloc(number * (sizeof(vecType)));

            for (int i = 0; i < vec->size; i++)
            {
                tempElements[i] = vec->elements[i];
            }

            free(vec->elements);
            vec->elements = tempElements;
        }
        vec->size = number;
    }
}

void pushBack(Vector *vec, vecType value)
{
    if (vec->size >= vec->capacity)
    {
        updateVectorCapacity(vec);
        vecType *tempElements = (vecType *)malloc(vec->capacity * (sizeof(vecType)));

        for (int i = 0; i < vec->size; i++)
        {
            tempElements[i] = vec->elements[i];
        }
        free(vec->elements);
        vec->elements = tempElements;
    }

    vec->elements[vec->size++] = value;
}

void popBack(Vector *vec)
{
    if (vec->size > 0)
    {
        vec->size--;
        if (vec->size == 0)
        {
            clear(vec);
        }
    }
}

void pushAt(Vector *vec, vecType value, unsigned int index)
{
    updateVectorCapacity(vec);
    vecType *tempElements = (vecType *)malloc(vec->capacity * (sizeof(vecType)));

    for (int i = 0; i < index; i++)
    {
        tempElements[i] = vec->elements[i];
    }

    tempElements[index] = value;

    for (int i = index + 1; i < vec->size + 1; i++)
    {
        tempElements[i] = vec->elements[i - 1];
    }
    free(vec->elements);
    vec->elements = tempElements;
    vec->size++;
}

void removeAt(Vector *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect operation!\n");
        return;
    }
    else
    {
        vecType temp = vec->elements[vec->size - 1];
        vec->elements[vec->size - 1] = vec->elements[index];
        vec->elements[index] = temp;

        popBack(vec);

        int changeIndex = index;
        for (int i = index; i < vec->size - 1; i++)
        {
            temp = vec->elements[changeIndex];
            vec->elements[changeIndex] = vec->elements[i + 1];
            vec->elements[i + 1] = temp;
            changeIndex++;
        }
    }
}

vecType getAt(Vector *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        return -1;
    }

    return vec->elements[index];
}

void replaceAt(Vector *vec, vecType value, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect opperation!\n");
        return;
    }
    vec->elements[index] = value;
}

bool isVectorEmpty(Vector *vec)
{
    if (vec->size == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
