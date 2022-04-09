#include "../include/Defines.h"

void vectorInit(Vector *vec, size_t initialCapacity)
{
  vec->capacity = initialCapacity;
  vec->size = 0;
  vec->items = malloc(sizeof(int *) * vec->capacity); // allocate memory for {$capacity}-number of int* (int* = ship in our project representation)
}

/****OUR FLEET REPRESENTATION*******************************************************************************************************************************************************/
/*                                                                                                                                                                                 */
/* int* items  ->   int* ptr0 -> type, health, damage, ....  (ship0)                               // ptr0 -> [0], [1], [2], [3], [4], [5]                                         */
/*                  int* ptr1 -> type, health, damage, ....  (ship2)                               // ptr1 -> [0], [1], [2], [3]                                                   */
/*                  int* ptr2 -> type, health, damage, ....  (ship3)                               // ptr1 -> [0], [1], [2], [3], [4], [5], [6], [7]                               */
/* -------------------------------------------------------------------------------------------------------------------------------------------------------                         */
/*                                                                                                                                                                                 */
/*                  int* ptrN -> type, health, damage, ....  (shipN), N = strlen(user input) -1    // ptrN -> [ ], ...., [ ], size depends on number of data-fields for each type  */
/*                                                                                                                                                                                 */
/***********************************************************************************************************************************************************************************/

size_t vectorGetSize(Vector *v)
{
  return v->size;
}

bool vectorIsEmpty(Vector *vec)
{
  return vec->size == 0;
}

void vectorResize(Vector *vec, size_t capacity)
{
  int **items = realloc(vec->items, sizeof(int *) * capacity); // generate new array, where we have the previous items + additional memory place for extra items

  if (items != NULL)
  {
    vec->items = items;
    vec->capacity = capacity;
  }

  if (vec->size >= capacity) // if we resize and the new capacity is smaller than the previous
  {
    vec->size = capacity;
  }
}

void vectorPush(Vector *vec, int *item)
{
  if (vec->capacity == vec->size)
  {
    vectorResize(vec, vec->capacity += ((vec->capacity / 2) + 1)); // if the vector is full allocates 50% +1 more memory
  }

  vec->items[vec->size] = item;
  vec->size++;
}

void vectorSet(Vector *vec, size_t idx, int *item)
{
  if (idx < vec->size)
  {
    vec->items[idx] = item;
  }
}

int *vectorGet(Vector *vec, size_t idx)
{
  if (idx < vec->size)
  {
    return vec->items[idx];
  }
  return NULL;
}

int *vectorBack(Vector *vec)
{
  if (0 == vec->size)
  {
    return NULL;
  }

  return vec->items[vec->size - 1];
}

void vectorDelete(Vector *vec, size_t idx)
{
  if (idx >= vec->size)
  {
    return;
  }

  vec->items[idx] = NULL;

  for (size_t i = idx; i < vec->size - 1; ++i) // shift back by one the iyems after items[idx]
  {
    vec->items[i] = vec->items[i + 1];
    vec->items[i + 1] = NULL;
  }

  vec->size--;
}

void vectorPop(Vector *vec)
{
  if (vec->size == 0)
  {
    return;
  }

  vec->size--;
}

void vectorFree(Vector *vec)
{
  if (vec->items != NULL)
  {
    free(vec->items); // free items if it is still not NULL
    vec->items = NULL;
    vec->size = 0;
    vec->capacity = 0;
  }
}
