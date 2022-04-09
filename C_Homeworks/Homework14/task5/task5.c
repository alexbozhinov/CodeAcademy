#include "task5.h"

struct Book *constructor(int number, FILE *rFile)
{
    struct Book *books = (struct Book *)malloc(number * sizeof(struct Book));

    int sheets = 0;
    char title[50];
    char temp = ' ';
    double price = 0.0;
    enum Type type = 0;

    for (int i = 0; i < number; i++)
    {
        //system("cls");

        //printf("Input book's number of sheets: ");
        fscanf(rFile, "%d", &sheets);
        setSheets(&books[i], sheets);

        //printf("Input book's title: ");
        fscanf(rFile, "%c", &temp); // temp statement to clear buffer
        fscanf(rFile, "%[^\n]", title);
        setTitle(&books[i], title);

        //printf("Input book's price: ");
        fscanf(rFile, "%lf", &price);
        setPrice(&books[i], price);

        //printf("Input book's type: ");
        fscanf(rFile, "%d", &type);
        setType(&books[i], type);
    }

    return books;
}

void destructor(struct Book *books, int number)
{
    for (int i = 0; i < number; i++)
    {
        free(books[i].title);
    }
    free(books);
}

void setSheets(struct Book *book, int sheets)
{
    book->sheets = sheets;
}

void setTitle(struct Book *book, char title[])
{
    int length = strlen(title);
    book->title = malloc(length * sizeof(char) + 1);
    strcpy(book->title, title);
    book->title[length] = '\0';
}

void setPrice(struct Book *book, double price)
{
    book->price = price;
}

void setType(struct Book *book, enum Type type)
{
    book->type = type;
}

int getSheets(struct Book *book)
{
    return book->sheets;
}

char *getTitle(struct Book *book)
{
    return book->title;
}

double getPrice(struct Book *book)
{
    return book->price;
}

enum Type getType(struct Book *book)
{
    return book->type;
}

void print(struct Book *book, FILE *wFile)
{
    char type[50] = "";

    switch (getType(book))
    {
    case 0:
        strcpy(type, "Criminal");
        break;
    case 1:
        strcpy(type, "Romance");
        break;
    case 2:
        strcpy(type, "Horror");
        break;
    case 3:
        strcpy(type, "Comedy");
        break;
    case 4:
        strcpy(type, "Lyrics");
        break;
    default:
        strcpy(type, "None");
        break;
    }

    printf("|%s\t\t|%s\t\t|%d\t|%.2f$|\n", getTitle(book), type, getSheets(book), getPrice(book));
    fprintf(wFile, "%s;%s;%d;%.2f\n", getTitle(book), type, getSheets(book), getPrice(book));
}

int comp(const void *a, const void *b)
{
    struct Book *leftBook = (struct Book *)a;
    struct Book *rightBook = (struct Book *)b;

    return strcmp(leftBook->title, rightBook->title);
}

void sortBooksByTitle(struct Book *books, int booksCount)
{
    qsort(books, booksCount, sizeof(struct Book), comp);
}

void menu()
{
    FILE *wFile, *rFile;

    rFile = fopen("input.txt", "r");

    //printf("Input number of books: ");
    int number = 2;
    //scanf("%d", &number);

    struct Book *books = constructor(number, rFile);

    sortBooksByTitle(books, number);

    wFile = fopen("output.csv", "w");

    if (wFile != NULL)
    {
       fprintf(wFile, "TITLE;TYPE;SHEETS;PRICE $\n");

        for (int i = 0; i < number; i++)
        {
            print(&books[i], wFile);
        }

        printf("Not free\n");
        destructor(books, number);
        printf("Free\n");

        fclose(wFile);
    }
}


