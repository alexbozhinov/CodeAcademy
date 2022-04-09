#include "../lib/priority_queue.h"

int parent(int i)
{
    return (i - 1) / 2;
}

int left(int i)
{
    return (2 * i + 1);
}

int right(int i)
{
    return (2 * i + 2);
}

void swapDeffects(Deffect *a, Deffect *b)
{
    Deffect temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(Vector_D *deffects, int i, State state)
{
    int size = deffects->size;
    int smallest = i;
    int l = left(i);
    int r = right(i);

    if (state == NEW)
    {
        if (l < size && isSmallerThan(&deffects->elements[l].findDate, &deffects->elements[smallest].findDate) == TRUE)
        {
            smallest = l;
        }
        if (r < size && isSmallerThan(&deffects->elements[r].findDate, &deffects->elements[smallest].findDate) == TRUE)
        {
            smallest = r;
        }
    }
    else if (state == FIXED)
    {
        if (l < size && isSmallerThan(&deffects->elements[l].repairDate, &deffects->elements[smallest].repairDate) == TRUE)
        {
            smallest = l;
        }
        if (r < size && isSmallerThan(&deffects->elements[r].repairDate, &deffects->elements[smallest].repairDate) == TRUE)
        {
            smallest = r;
        }
    }

    else if (state == CLOSED)
    {
        if (l < size && isSmallerThan(&deffects->elements[l].closeDate, &deffects->elements[smallest].closeDate) == TRUE)
        {
            smallest = l;
        }
        if (r < size && isSmallerThan(&deffects->elements[r].closeDate, &deffects->elements[smallest].closeDate) == TRUE)
        {
            smallest = r;
        }
    }

    if (smallest != i)
    {
        swapDeffects(&deffects->elements[i], &deffects->elements[smallest]);
        heapify(deffects, smallest, state);
    }
}

void insertDeffect(Vector_D *deffects, Deffect newDeffect, State state)
{
    int size = deffects->size;

    if (size == 0)
    {
        pushBackD(deffects, newDeffect);
    }
    else
    {
        pushBackD(deffects, newDeffect);
        for (int i = size; i >= 0; i--)
        {
            heapify(deffects, i, state);
        }
    }
}

void deleteDeffect(Vector_D *deffects, Deffect toRemove, State state)
{
    int size = deffects->size;

    int i = 0;

    for (i = 0; i < size; i++)
    {
        if (toRemove.deffectId == deffects->elements[i].deffectId)
        {
            break;
        }
    }
    swapDeffects(&deffects->elements[i], &deffects->elements[size - 1]);

    popBackD(deffects);

    for (int i = size - 1; i >= 0; i--)
    {
        heapify(deffects, i, state);
    }
}

Deffect *queueTop(Vector_D *deffects)
{
    return &deffects->elements[0];
}

void queuePop(Vector_D *deffects, State state)
{
    deleteDeffect(deffects, deffects->elements[0], state);
}