#include "../lib/vector_i.h"

Vector_I vectorConstructorI(const unsigned int capacity)
{
    Vector_I vec;

    vec.size = 0;
    vec.capacity = capacity;
    vec.elements = (vecTypeI *)malloc(sizeof(vecTypeI) * vec.capacity);

    return vec;
}

void vectorDestructorI(Vector_I *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
}

unsigned int sizeI(Vector_I *vec)
{
    return vec->size;
}

unsigned int getVectorCapacityI(Vector_I *vec)
{
    return vec->capacity;
}

vecTypeI *getElementsI(Vector_I *vec)
{
    return vec->elements;
}
/*
void vectorInputD(Vector_I *vec, int numberOfElemens)
{
    for (int i = 0; i < numberOfElemens; i++)
    {
        vecTypeI element = 0;
        scanf("%d", &element);
        pushBack(vec, element);
    }
}
*//*
void vectorOutputD(Vector_I *vec)
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
*/
void updateVectorCapacityI(Vector_I *vec)
{
    if (vec->size >= vec->capacity)
    {
        vec->capacity += vec->capacity / 2 + 1;
    }
}

void clearI(Vector_I *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
    vec->elements = NULL;
}

void resizeI(Vector_I *vec, unsigned int number)
{
    if (number == 0)
    {
        clearI(vec);
    }
    else
    {
        if (number > vec->capacity)
        {
            vec->capacity = number;
            vecTypeI *tempElements = (vecTypeI *)malloc(number * (sizeof(vecTypeI)));

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

void pushBackI(Vector_I *vec, vecTypeI value)
{
    if (vec->size >= vec->capacity) 
    {
        updateVectorCapacityI(vec);
        vecTypeI *tempElements = (vecTypeI *)malloc(vec->capacity * (sizeof(vecTypeI)));

        for (int i = 0; i < vec->size; i++)
        {
            tempElements[i] = vec->elements[i];
        }
        free(vec->elements);
        vec->elements = tempElements;
    }

    vec->elements[vec->size++] = value;
}

void popBackI(Vector_I *vec)
{
    if (vec->size > 0)
    {
        vec->size--;
        if (vec->size == 0)
        {
            clearI(vec);
        }
    }
}

void pushAtI(Vector_I *vec, vecTypeI value, unsigned int index)
{
    updateVectorCapacityI(vec);
    vecTypeI *tempElements = (vecTypeI *)malloc(vec->capacity * (sizeof(vecTypeI)));

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

void removeAtI(Vector_I *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect operation!\n");
        return;
    }
    else
    {
        vecTypeI temp = vec->elements[vec->size - 1];
        vec->elements[vec->size - 1] = vec->elements[index];
        vec->elements[index] = temp;

        popBackI(vec);

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

vecTypeI getAtI(Vector_I *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        return vec->elements[0]; //default
    }

    return vec->elements[index];
}

void replaceAtI(Vector_I *vec, vecTypeI value, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect opperation!\n");
        return;
    }
    vec->elements[index] = value;
}

bool isVectorEmptyI(Vector_I *vec)
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
