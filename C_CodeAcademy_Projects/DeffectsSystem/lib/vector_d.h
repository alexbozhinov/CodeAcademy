#ifndef VECTOR_D_H_INCLUDED
#define VECTOR_D_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "deffect.h"
#include "myString.h"

/*A struct, which represents the c++ class vector for deffect's type <=> vector<Deffect> deffects;*/

typedef Deffect vecTypeD;

typedef struct
{
    vecTypeD *elements;
    unsigned int size;
    unsigned int capacity;
} Vector_D;

Vector_D vectorConstructorD(unsigned int capacity); //+  construct vector
void vectorDestructorD(Vector_D *vec);              //+  destruct vector

unsigned int sizeD(Vector_D *vec);              //+  return vector's size
unsigned int getVectorCapacityD(Vector_D *vec); //+  return vector's capacity
vecTypeD *getElementsD(Vector_D *vec);          //+  retrun vector's elements

void vectorInputD(Vector_D *vec, int numberOfElements); //+  input vector elements from keyboard
void vectorOutputD(Vector_D *vec);                      //+  print vector elements

void updateVectorCapacityD(Vector_D *vec);   //+  increase vector's capacity
void clearD(Vector_D *vec);                  //+  clear vector's elements <=> with destructor
void resizeD(Vector_D *vec, unsigned int n); //+  resize the vecotr

void pushBackD(Vector_D *vec, vecTypeD value); //+  push element at the end
void popBackD(Vector_D *vec);                  //+  pop element from the end

void pushAtD(Vector_D *vec, vecTypeD value, unsigned int index);    //+  push element at position index
void removeAtD(Vector_D *vec, unsigned int index);                  //+  remove element from position index
vecTypeD getAtD(Vector_D *vec, unsigned int index);                 //+  get element at position index
void replaceAtD(Vector_D *vec, vecTypeD value, unsigned int index); //+  replace element at position index

bool isVectorfEmptyD(Vector_D *vec); //+  check if a vector is empty or not

#endif