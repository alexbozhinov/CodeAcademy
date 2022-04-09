#include "../lib/vector_c.h"

Vector_C vectorConstructorC(const unsigned int capacity)
{
    Vector_C vec;

    vec.size = 0;
    vec.capacity = capacity;
    vec.elements = (vecTypeC *)malloc(sizeof(vecTypeC) * vec.capacity);

    return vec;
}

void vectorDestructorC(Vector_C *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
}

unsigned int sizeC(Vector_C *vec)
{
    return vec->size;
}

unsigned int getVectorCapacityC(Vector_C *vec)
{
    return vec->capacity;
}

vecTypeC *getElementsC(Vector_C *vec)
{
    return vec->elements;
}
/*
void vectorInputD(Vector_C *vec, int numberOfElemens)
{
    for (int i = 0; i < numberOfElemens; i++)
    {
        vecTypeC element = 0;
        scanf("%d", &element);
        pushBack(vec, element);
    }
}
*//*
void vectorOutputD(Vector_C *vec)
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
void updateVectorCapacityC(Vector_C *vec)
{
    if (vec->size >= vec->capacity)
    {
        vec->capacity += vec->capacity / 2 + 1;
    }
}

void clearC(Vector_C *vec)
{
    free(vec->elements);
    vec->capacity = 0;
    vec->size = 0;
    vec->elements = NULL;
}

void resizeC(Vector_C *vec, unsigned int number)
{
    if (number == 0)
    {
        clearC(vec);
    }
    else
    {
        if (number > vec->capacity)
        {
            vec->capacity = number;
            vecTypeC *tempElements = (vecTypeC *)malloc(number * (sizeof(vecTypeC)));

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

void pushBackC(Vector_C *vec, vecTypeC value)
{
    if (vec->size >= vec->capacity) 
    {
        updateVectorCapacityC(vec);
        vecTypeC *tempElements = (vecTypeC *)malloc(vec->capacity * (sizeof(vecTypeC)));

        for (int i = 0; i < vec->size; i++)
        {
            tempElements[i] = vec->elements[i];
        }
        free(vec->elements);
        vec->elements = tempElements;
    }

    vec->elements[vec->size++] = value;
}

void popBackC(Vector_C *vec)
{
    if (vec->size > 0)
    {
        vec->size--;
        if (vec->size == 0)
        {
            clearC(vec);
        }
    }
}

void pushAtC(Vector_C *vec, vecTypeC value, unsigned int index)
{
    updateVectorCapacityC(vec);
    vecTypeC *tempElements = (vecTypeC *)malloc(vec->capacity * (sizeof(vecTypeC)));

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

void removeAtC(Vector_C *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect operation!\n");
        return;
    }
    else
    {
        vecTypeC temp = vec->elements[vec->size - 1];
        vec->elements[vec->size - 1] = vec->elements[index];
        vec->elements[index] = temp;

        popBackC(vec);

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

vecTypeC getAtC(Vector_C *vec, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        return vec->elements[0]; //default
    }

    return vec->elements[index];
}

void replaceAtC(Vector_C *vec, vecTypeC value, unsigned int index)
{
    if (index < 0 || index >= vec->size)
    {
        printf("Incorrect opperation!\n");
        return;
    }
    vec->elements[index] = value;
}

bool isVectorEmptyC(Vector_C *vec)
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
