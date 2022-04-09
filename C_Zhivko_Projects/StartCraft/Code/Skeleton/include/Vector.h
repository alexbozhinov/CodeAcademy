#ifndef VECTOR_H_
#define VECTOR_H_

#include "Defines.h"

typedef struct
{
  int **items;     // matrix where each row represents a ship, and each row has different number of columns
  size_t capacity; // the maximum number of rows
  size_t size;     // the current number of rows
} Vector;

void vectorInit(Vector *vec, size_t initialCapacity); // a function which allocates memory for [initialCapacity] number of rows
size_t vectorGetSize(Vector *vec);                    // a function which returns the soze of the vector
bool vectorIsEmpty(Vector *vec);                      // a function which checks if the given vector is empty, returns true if size == 0 and false if size > 0
void vectorResize(Vector *vec, size_t newSize);       // a function which allocates further memory place for extra items in the vector
void vectorPush(Vector *vec, int *elem);              // a function which inserts a new row ate the end of the matrix
void vectorSet(Vector *vec, size_t idx, int *elem);   // a fucntion which sets a new value of the item at position [idx] of the items** array of the vector
int *vectorGet(Vector *vec, size_t idx);              // a function which returns the idx-th row of the matrix or NULL if it does not exist
int *vectorBack(Vector *vec);                         // a function which returns the last row of the matrix or NULL if the vector is empty => (size == 0)
void vectorDelete(Vector *vec, size_t idx);           // a function which removes the idx-th row of the matrix if it exists and rearranges the rows => (removes the NULL holes)
void vectorPop(Vector *vec);                          // a function which hides the current last element of the vector by reducing the size by 1
void vectorFree(Vector *vec);                         // a function which frees the allocated memory if we still have elements in the vector

#endif /* VECTOR_H_ */
