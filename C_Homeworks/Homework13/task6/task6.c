#include "task6.h"

struct Student *constructStudent(int count, int subjectCount)
{
    struct Student *students = (struct Student *)malloc(count * sizeof(struct Student));

    for (int i = 0; i < count; i++)
    {
        char studentName[50] = "";
        printf("Input student name: ");
        scanf("%s", &studentName);
        setStudentName(&students[i], studentName);

        int fn = 0;

        printf("Input student fn: ");
        scanf("%d", &fn);
        students[i].fn = fn;

        students[i].subjects = malloc(subjectCount * sizeof(struct Subject));

        for (int j = 0; j < subjectCount; j++)
        {
            printf("Input subject name: ");
            char subName[50] = "";
            scanf("%s", &subName);
            setSubjectName(&students[i].subjects[j], subName);

            printf("Input subject mark: ");
            double mark = 0;
            scanf("%lf", &mark);
            students[i].subjects[j].mark = mark;
        }
    }

    return students;
}

void setSubjectName(struct Subject *subject, const char *newName)
{
    int length = strlen(newName);
    subject->name = malloc(length * sizeof(char) + 1);
    strcpy(subject->name, newName);
    subject->name[length] = '\0';
}

void setStudentName(struct Student *student, const char *newName)
{
    int length = strlen(newName);
    student->name = malloc(length * sizeof(char) + 1);
    strcpy(student->name, newName);
    student->name[length] = '\0';
}

void printStudents(struct Student *students, int numberOfStudents, int numberOfSubjects)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        double average = 0.0;
        printf("\nStudent: fn = %d\tname = %s\n", students[i].fn, students[i].name);
        for (int j = 0; j < numberOfSubjects; j++)
        {
            average += students[i].subjects[j].mark;
            printf("Subject name: %s, Mark = %.2f\n", students[i].subjects[j].name, students[i].subjects[j].mark);
        }
        average = average / numberOfSubjects;
        printf("Student average result = %.2f\n\n", average);
    }
}

void clean(struct Student *students, int studentsCount, int subjectsCount)
{
    for (int i = 0; i < studentsCount; i++)
    {
        for (int j = 0; j < subjectsCount; j++)
        {
            free(students[i].subjects[j].name);
        }
        free(students[i].name);
        free(students[i].subjects);
    }
    free(students);
}

void menu()
{
    int numberOfStudents = 0;
    printf("Input number of students: ");
    scanf("%d", &numberOfStudents);

    printf("Input subjects count: ");
    int subjectCount = 0;
    scanf("%d", &subjectCount);

    struct Student *students = constructStudent(numberOfStudents, subjectCount);
    printStudents(students, numberOfStudents, subjectCount);
    
    clean(students, numberOfStudents, subjectCount);
}