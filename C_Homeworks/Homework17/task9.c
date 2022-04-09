#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee
{
    short int experience;
    char *ID;
    char *firstName, *secondName, *lastName;
    char *workPosition;
    double salary;
    struct Employee *boss;
} Employee;

void setEmployeeName(struct Employee *Employee, const char *firstName, const char *secondName, const char *lastName)
{
    int len = strlen(firstName);
    Employee->firstName = malloc(len * sizeof(char) + 1);
    strcpy(Employee->firstName, firstName);
    Employee->firstName[len] = '\0';

    len = strlen(secondName);
    Employee->secondName = malloc(len * sizeof(char) + 1);
    strcpy(Employee->secondName, secondName);
    Employee->secondName[len] = '\0';

    len = strlen(lastName);
    Employee->lastName = malloc(len * sizeof(char) + 1);
    strcpy(Employee->lastName, lastName);
    Employee->lastName[len] = '\0';
}

void setEmployeeInfo(struct Employee *employee, const char *firstName, const char *secondName,
                     const char *lastName, const char *ID, const char *workPosition,
                     const int experience, const double salary)
{

    setEmployeeName(employee, firstName, secondName, lastName);

    int len = strlen(ID);
    employee->ID = malloc(len * sizeof(char) + 1);
    strcpy(employee->ID, ID);
    employee->ID[len] = '\0';

    len = strlen(workPosition);
    employee->workPosition = malloc(len * sizeof(char) + 1);
    strcpy(employee->workPosition, workPosition);
    employee->workPosition[len] = '\0';

    employee->experience = experience;

    employee->salary = salary;
}

void printEmployees(struct Employee *employees, int numberOfEmployees)
{
    for (int i = 0; i < numberOfEmployees; i++)
    {
        printf("\nEmployee: name = %s %s %s\n", employees[i].firstName, employees[i].secondName, employees[i].lastName);
        printf("ID = %s\n", employees[i].ID);
        printf("Position = %s\n", employees[i].workPosition);
        printf("Salary = %.2f\n", employees[i].salary);
        printf("Experience = %d\n", employees[i].experience);
    }
}

void printEmployee(struct Employee employee)
{

    printf("\nEmployee: name = %s %s %s\n", employee.firstName, employee.secondName, employee.lastName);
    printf("ID = %s\n", employee.ID);
    printf("Position = %s\n", employee.workPosition);
    printf("Salary = %.2f\n", employee.salary);
    printf("Experience = %d\n", employee.experience);
}

void clean(struct Employee *employees, int employeesCount)
{
    for (int i = 0; i < employeesCount; i++)
    {
        free(employees[i].firstName);
        free(employees[i].secondName);
        free(employees[i].lastName);
        free(employees[i].ID);
        free(employees[i].workPosition);
    }
    free(employees);
}

void menu()
{
    printf("Input number of employees: ");
    int numberOfEmployees = 0;
    scanf("%d", &numberOfEmployees);

    struct Employee *employees = malloc(numberOfEmployees * sizeof(struct Employee));

    for (int i = 0; i < numberOfEmployees; i++)
    {
        printf("Input first name: ");
        char firstName[50] = "";
        scanf("%s", &firstName);

        printf("Input second name: ");
        char secondName[50] = "";
        scanf("%s", &secondName);

        printf("Input last name: ");
        char lastName[50] = "";
        scanf("%s", &lastName);

        printf("Input ID: ");
        char ID[10] = "";
        scanf("%s", &ID);

        printf("Input position: ");
        char position[50] = "";
        scanf("%s", &position);

        printf("Input experience: ");
        int experience = 0;
        scanf("%d", &experience);

        printf("Input salary: ");
        double salary = 0.0;
        scanf("%lf", &salary);

        setEmployeeInfo(&employees[i], firstName, secondName, lastName, ID, position, experience, salary);
    }

    employees[1].boss = &employees[0];
    printEmployee(employees[1]);

    for (int i = 0; i < numberOfEmployees; i++)
    {
        printEmployees(&employees[i], numberOfEmployees);
    }

    clean(employees, numberOfEmployees);
}

int main()
{
    menu();

    return 0;
}

/*
Задача 9. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. След като въведете всички служители,
задайте началник за всеки от тях. В решението трябва да се използва
динамично заделяне на памет и typedef.
*/