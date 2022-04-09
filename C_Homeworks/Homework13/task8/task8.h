#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    short int experience;
    char *ID;
    char *firstName, *secondName, *lastName;
    char *workPosition;
    double salary;
    struct Employee *boss;
};

void printEmployees(struct Employee *employees, int numberOfEmployees);

void printEmployee(struct Employee employee);

void setEmployeeName(struct Employee *employee, const char *firstName, const char *secondName, const char *lastName);

void setEmployeeInfo(struct Employee *employee, const char *firstName, const char *secondName,
                   const char *lastName, const char *ID, const char *workPosition,
                   const int experience, const double salary);

void menu();

void clean(struct Employee* employees, int numberOfEmployees);






