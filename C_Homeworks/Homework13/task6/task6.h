#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Subject
{
    char *name;
    double mark;
};

struct Student
{
    int fn;
    char *name;
    struct Subject *subjects;
};

struct Student *constructStudent(int count, int subjectCount);

void printStudents(struct Student *students, int numberOfStudents, int numberOfSubjects);

void menu();

void setSubjectName(struct Subject *subject, const char *newName);

void setStudentName(struct Student *student, const char *newName);

void clean(struct Student* students, int studentsCount, int subjectsCount);
