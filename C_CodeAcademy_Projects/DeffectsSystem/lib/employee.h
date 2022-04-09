#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#define MAX_NAME_LENGTH 50

#include <stdio.h>
#include "position.h"
#include "myString.h"

/*A struct, which represents employee type with: id, first name, second name, last name, position.*/

typedef struct
{
    int employeeId;
    String firstName;
    String secondName;
    String lastName;
    Position position;
} Employee;

Employee employeeConstructor(int id, Position position); // a function which recieves id and position and constructs an employee with these id and position +

void employeeDestructor(Employee *employee); // a function that frees Employee's name's fields +

void setPosition(Employee *employee, Position position); // a set function for employee's position +

void setNmaes(Employee *employee); // a set function for employee's names +

int getEmployeeId(Employee *employee); // a function that returns the employee's id +

void printEmployee(Employee *employee); // a print function for employee +

#endif