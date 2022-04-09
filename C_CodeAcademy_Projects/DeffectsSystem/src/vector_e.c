#include "../lib/vector_e.h"

Vector_E vectorConstructorE(const unsigned int capacity)
{
    Vector_E vec;

    vec.size = 0;
    vec.capacity = capacity;
    vec.elements = (vecTypeE *)malloc(sizeof(vecTypeE) * vec.capacity);

    return vec;
}

void vectorDestructorE(Vector_E *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
}

unsigned int sizeE(Vector_E *vec)
{
    return vec->size;
}

unsigned int getVectorCapacityE(Vector_E *vec)
{
    return vec->capacity;
}

vecTypeE *getElementsE(Vector_E *vec)
{
    return vec->elements;
}
/*
void vectorInputE(Vector_E *vec, int numberOfElemens)
{
    for (int i = 0; i < numberOfElemens; i++)
    {
        vecTypeE element = 0;
        scanf("%d", &element);
        pushBack(vec, element);
    }
}
*/
/*
void vectorOutputE(Vector_E *vec)
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
void updateVectorCapacityE(Vector_E *vec)
{
    if (vec->size >= vec->capacity)
    {
        vec->capacity += vec->capacity / 2 + 1;
    }
}

void clearE(Vector_E *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
    vec->elements = NULL;
}

void resizeE(Vector_E *vec, unsigned int number)
{
    if (number == 0)
    {
        clearE(vec);
    }
    else
    {
        if (number > vec->capacity)
        {
            vec->capacity = number;
            vecTypeE *tempElements = (vecTypeE *)malloc(number * (sizeof(vecTypeE)));

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

void pushBackE(Vector_E *vec, vecTypeE value)
{
    if (vec->size >= vec->capacity)
    {
        updateVectorCapacityE(vec);
        vecTypeE *tempElements = (vecTypeE *)malloc(vec->capacity * (sizeof(vecTypeE)));

        for (int i = 0; i < vec->size; i++)
        {
            tempElements[i] = vec->elements[i];
        }
        free(vec->elements);
        vec->elements = tempElements;
    }

    vec->elements[vec->size++] = value;
}

void popBackE(Vector_E *vec)
{
    if (vec->size > 0)
    {
        vec->size--;
        if (vec->size == 0)
        {
            clearE(vec);
        }
    }
}

void pushAtE(Vector_E *vec, vecTypeE value, unsigned int index)
{
    updateVectorCapacityE(vec);
    vecTypeE *tempElements = (vecTypeE *)malloc(vec->capacity * (sizeof(vecTypeE)));

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

void removeAtE(Vector_E *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect operation!\n");
        return;
    }
    else
    {
        vecTypeE temp = vec->elements[vec->size - 1];
        vec->elements[vec->size - 1] = vec->elements[index];
        vec->elements[index] = temp;

        popBackE(vec);

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

vecTypeE getAtE(Vector_E *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        return vec->elements[0]; //default
    }

    return vec->elements[index];
}

void replaceAtE(Vector_E *vec, vecTypeE value, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect opperation!\n");
        return;
    }
    vec->elements[index] = value;
}

bool isVectorEmptyE(Vector_E *vec)
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
