#include "../lib/employee.h"

Employee employeeConstructor(int id, Position position)
{
    Employee employee;
    employee.employeeId = id;

    setNmaes(&employee);
    setPosition(&employee, position);

    return employee;
}

void employeeDestructor(Employee *employee)
{
    stringDestructor(&employee->firstName);
    stringDestructor(&employee->secondName);
    stringDestructor(&employee->lastName);
}

void setPosition(Employee *employee, Position position)
{
    employee->position = position;
}

void setNmaes(Employee *employee)
{
    char firstName[MAX_NAME_LENGTH] = "";
    stringInput(firstName);
    employee->firstName = stringConstructor(firstName);

    char secondName[MAX_NAME_LENGTH] = "";
    stringInput(secondName);
    employee->secondName = stringConstructor(secondName);

    char lastName[MAX_NAME_LENGTH] = "";
    stringInput(lastName);
    employee->lastName = stringConstructor(lastName);
}

int getEmployeeId(Employee *employee)
{
    return employee->employeeId;
}

void printEmployee(Employee *employee)
{
    printf("| Employee ID = %.2d   ", employee->employeeId);
    printf("|");
    stringOutput(&employee->firstName);
    printf(" ");
    stringOutput(&employee->secondName);
    printf(" ");
    stringOutput(&employee->lastName);

    for (int i = 0; i < 30 - (employee->firstName.length + employee->secondName.length + employee->lastName.length); i++)
    {
        printf(" ");
    }
    
    printf("\t| Position: ");
    printPosition(employee->position);
    printf("|\n");
}