#ifndef Vector_C_H_INCLUDED
#define Vector_C_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "myString.h"
#include "contestant.h"

/*A struct, which represents the c++ class vector for deffect's type <=> vector<Deffect> deffects;*/

typedef Contestant vecTypeC;

typedef struct
{
    vecTypeC *elements;
    unsigned int size;
    unsigned int capacity;
} Vector_C;

Vector_C vectorConstructorC(unsigned int capacity); //+  construct vector
void vectorDestructorC(Vector_C *vec);              //+  destruct vector

unsigned int sizeC(Vector_C *vec);              //+  return vector's size
unsigned int getVectorCapacityC(Vector_C *vec); //+  return vector's capacity
vecTypeC *getElementsC(Vector_C *vec);          //+  retrun vector's elements

void vectorInputC(Vector_C *vec, int numberOfElements); //+  input vector elements from keyboard
void vectorOutputC(Vector_C *vec);                      //+  print vector elements

void updateVectorCapacityC(Vector_C *vec);   //+  increase vector's capacity
void clearC(Vector_C *vec);                  //+  clear vector's elements <=> with destructor
void resizeC(Vector_C *vec, unsigned int n); //+  resize the vecotr

void pushBackC(Vector_C *vec, vecTypeC value); //+  push element at the end
void popBackC(Vector_C *vec);                  //+  pop element from the end

void pushAtC(Vector_C *vec, vecTypeC value, unsigned int index);    //+  push element at position index
void removeAtC(Vector_C *vec, unsigned int index);                  //+  remove element from position index
vecTypeC getAtC(Vector_C *vec, unsigned int index);                 //+  get element at position index
void replaceAtC(Vector_C *vec, vecTypeC value, unsigned int index); //+  replace element at position index

bool isVectorfEmptyC(Vector_C *vec); //+  check if a vector is empty or not

#endif