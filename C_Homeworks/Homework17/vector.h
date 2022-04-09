#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

typedef int vecType;

typedef struct
{
    vecType *elements;
    unsigned int size;
    unsigned int capacity;
} Vector;

Vector vectorConstructor(unsigned int capacity); //+  construct vector
void vectorDestructor(Vector *vec);              //+  destruct vector

unsigned int size(Vector *vec);              //+  return vector's size
unsigned int getVectorCapacity(Vector *vec); //+  return vector's capacity
vecType *getElements(Vector *vec);           //+  retrun vector's elements

void vectorInput(Vector *vec, int numberOfElements); //+  input vector elements from keyboard
void vectorOutput(Vector *vec);                      //+  print vector elements

void updateVectorCapacity(Vector *vec);   //+  increase vector's capacity
void clear(Vector *vec);                  //+  clear vector's elements <=> with destructor
void resize(Vector *vec, unsigned int n); //+  resize the vecotr

void pushBack(Vector *vec, vecType value); //+  push element at the end
void popBack(Vector *vec);                 //+  pop element from the end

void pushAt(Vector *vec, vecType value, unsigned int index);    //+  push element at position index
void removeAt(Vector *vec, unsigned int index);                 //+  remove element from position index
vecType getAt(Vector *vec, unsigned int index);                 //+  get element at position index
void replaceAt(Vector *vec, vecType value, unsigned int index); //+  replace element at position index

bool isVectorfEmpty(Vector *vec); //+  check if a vector is empty or not

#endif