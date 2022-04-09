#include "../lib/vector_d.h"

Vector_D vectorConstructorD(const unsigned int capacity)
{
    Vector_D vec;

    vec.size = 0;
    vec.capacity = capacity;
    vec.elements = (vecTypeD *)malloc(sizeof(vecTypeD) * vec.capacity);

    return vec;
}

void vectorDestructorD(Vector_D *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
}

unsigned int sizeD(Vector_D *vec)
{
    return vec->size;
}

unsigned int getVectorCapacityD(Vector_D *vec)
{
    return vec->capacity;
}

vecTypeD *getElementsD(Vector_D *vec)
{
    return vec->elements;
}
/*
void vectorInputD(Vector_D *vec, int numberOfElemens)
{
    for (int i = 0; i < numberOfElemens; i++)
    {
        vecTypeD element = 0;
        scanf("%d", &element);
        pushBack(vec, element);
    }
}
*//*
void vectorOutputD(Vector_D *vec)
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
void updateVectorCapacityD(Vector_D *vec)
{
    if (vec->size >= vec->capacity)
    {
        vec->capacity += vec->capacity / 2 + 1;
    }
}

void clearD(Vector_D *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
    vec->elements = NULL;
}

void resizeD(Vector_D *vec, unsigned int number)
{
    if (number == 0)
    {
        clearD(vec);
    }
    else
    {
        if (number > vec->capacity)
        {
            vec->capacity = number;
            vecTypeD *tempElements = (vecTypeD *)malloc(number * (sizeof(vecTypeD)));

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

void pushBackD(Vector_D *vec, vecTypeD value)
{
    if (vec->size >= vec->capacity)
    {
        updateVectorCapacityD(vec);
        vecTypeD *tempElements = (vecTypeD *)malloc(vec->capacity * (sizeof(vecTypeD)));

        for (int i = 0; i < vec->size; i++)
        {
            tempElements[i] = vec->elements[i];
        }
        free(vec->elements);
        vec->elements = tempElements;
    }

    vec->elements[vec->size++] = value;
}

void popBackD(Vector_D *vec)
{
    if (vec->size > 0)
    {
        vec->size--;
        if (vec->size == 0)
        {
            clearD(vec);
        }
    }
}

void pushAtD(Vector_D *vec, vecTypeD value, unsigned int index)
{
    updateVectorCapacityD(vec);
    vecTypeD *tempElements = (vecTypeD *)malloc(vec->capacity * (sizeof(vecTypeD)));

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

void removeAtD(Vector_D *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect operation!\n");
        return;
    }
    else
    {
        vecTypeD temp = vec->elements[vec->size - 1];
        vec->elements[vec->size - 1] = vec->elements[index];
        vec->elements[index] = temp;

        popBackD(vec);

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

vecTypeD getAtD(Vector_D *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        return vec->elements[0]; //default
    }

    return vec->elements[index];
}

void replaceAtD(Vector_D *vec, vecTypeD value, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect opperation!\n");
        return;
    }
    vec->elements[index] = value;
}

bool isVectorEmptyD(Vector_D *vec)
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
