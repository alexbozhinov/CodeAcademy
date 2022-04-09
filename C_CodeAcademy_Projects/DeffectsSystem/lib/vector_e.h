#ifndef VECTOR_E_H_INCLUDED
#define VECTOR_E_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "employee.h"
#include "myString.h"

/*A struct, which represents the c++ class vector for employee's type <=> vector<Employee> employees;*/

typedef Employee vecTypeE;

typedef struct
{
    vecTypeE *elements;
    unsigned int size;
    unsigned int capacity;
} Vector_E;

Vector_E vectorConstructorE(unsigned int capacity); //+  construct vector
void vectorDestructorE(Vector_E *vec);              //+  destruct vector

unsigned int sizeE(Vector_E *vec);              //+  return vector's size
unsigned int getVectorCapacityE(Vector_E *vec); //+  return vector's capacity
vecTypeE *getElementsE(Vector_E *vec);          //+  retrun vector's elements

void vectorInputE(Vector_E *vec, int numberOfElements); //+  input vector elements from keyboard
void vectorOutputE(Vector_E *vec);                      //+  print vector elements

void updateVectorCapacityE(Vector_E *vec);   //+  increase vector's capacity
void clearE(Vector_E *vec);                  //+  clear vector's elements <=> with destructor
void resizeE(Vector_E *vec, unsigned int n); //+  resize the vecotr

void pushBackE(Vector_E *vec, vecTypeE value); //+  push element at the end
void popBackE(Vector_E *vec);                  //+  pop element from the end

void pushAtE(Vector_E *vec, vecTypeE value, unsigned int index);    //+  push element at position index
void removeAtE(Vector_E *vec, unsigned int index);                  //+  remove element from position index
vecTypeE getAtE(Vector_E *vec, unsigned int index);                 //+  get element at position index
void replaceAtE(Vector_E *vec, vecTypeE value, unsigned int index); //+  replace element at position index

bool isVectorfEmptyE(Vector_E *vec); //+  check if a vector is empty or not

#endif