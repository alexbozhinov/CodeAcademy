#ifndef Vector_I_H_INCLUDED
#define Vector_I_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "myString.h"

/*A struct, which represents the c++ class vector for deffect's type <=> vector<Deffect> deffects;*/

typedef int vecTypeI;

typedef struct
{
    vecTypeI *elements;
    unsigned int size;
    unsigned int capacity;
} Vector_I;

Vector_I vectorConstructorI(unsigned int capacity); //+  construct vector
void vectorDestructorI(Vector_I *vec);              //+  destruct vector

unsigned int sizeI(Vector_I *vec);              //+  return vector's size
unsigned int getVectorCapacityI(Vector_I *vec); //+  return vector's capacity
vecTypeI *getElementsI(Vector_I *vec);          //+  retrun vector's elements

void vectorInputI(Vector_I *vec, int numberOfElements); //+  input vector elements from keyboard
void vectorOutputI(Vector_I *vec);                      //+  print vector elements

void updateVectorCapacityI(Vector_I *vec);   //+  increase vector's capacity
void clearI(Vector_I *vec);                  //+  clear vector's elements <=> with destructor
void resizeI(Vector_I *vec, unsigned int n); //+  resize the vecotr

void pushBackI(Vector_I *vec, vecTypeI value); //+  push element at the end
void popBackI(Vector_I *vec);                  //+  pop element from the end

void pushAtI(Vector_I *vec, vecTypeI value, unsigned int index);    //+  push element at position index
void removeAtI(Vector_I *vec, unsigned int index);                  //+  remove element from position index
vecTypeI getAtI(Vector_I *vec, unsigned int index);                 //+  get element at position index
void replaceAtI(Vector_I *vec, vecTypeI value, unsigned int index); //+  replace element at position index

bool isVectorfEmptyI(Vector_I *vec); //+  check if a vector is empty or not

#endif