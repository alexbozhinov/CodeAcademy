#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Type
{
    Criminal,
    Romance,
    Horror,
    Comedy,
    Lyrics,
};

struct Book
{
    int sheets;
    char *title;
    double price;
    enum Type type;
};

struct Book *constructor(int number, FILE *rFile);
void destructor(struct Book *books, int number);

void setSheets(struct Book *book, int sheets);
void setTitle(struct Book *book, char *title);
void setPrice(struct Book *book, double price);
void setType(struct Book *book, enum Type type);

int getSheets(struct Book *book);
char *getTitle(struct Book *book);
double getPrice(struct Book *book);
enum Type getType(struct Book *book);

void print(struct Book *book, FILE *wFile);

void menu();

int comp(const void *a, const void *b);
void sortBooksByTitle(struct Book *books, int booksCount);
