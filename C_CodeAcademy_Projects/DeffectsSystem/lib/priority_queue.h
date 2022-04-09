#ifndef PRIORITY_QUEUE_H_INCLUDED
#define PRIORITY_QUEUE_INCLUDED

#include "boolean.h"
#include "position.h"
#include "myString.h"
#include "date.h"
#include "state.h"
#include "employee.h"
#include "deffect.h"
#include "vector_d.h"

/*Functions, which represent priority_queue (minimal heap)*/

int parent(int i); // a function that returns the parent of  the i-th element of the tree +
int left(int i);   // a function that returns the left child of the i-th element of the tree +
int right(int i);  // a function that returns the right child of the i-th element of the tree +

void swapDeffects(Deffect *a, Deffect *b); // a function, which swaps two Deffect type variables +

void heapify(Vector_D *deffects, int i, State state); // a function, which heapifies the minimal priority_queue +

void insertDeffect(Vector_D *deffects, Deffect newDeffect, State state); // a function to insert new element in a priority queue and heapify then +

void deleteDeffect(Vector_D *deffects, Deffect toRemove, State state); // a function to remove a deffect, which the user wants to remove +

Deffect *queueTop(Vector_D *deffects); // a function that returns the top element of the priority_queue (the element with biggest priority) +

void queuePop(Vector_D *deffects, State state); // a function which removes the top of the queue +

#endif