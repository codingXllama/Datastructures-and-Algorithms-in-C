//In this file, we will take a look at how to declare a structure for school that
// contains students, and their attributes example, major,class,department, etc.

#include <stdio.h>
#include <string.h>

// Creating global var
int yearNumber;

struct StudentInfo
{
    char name[25];
    char department[25];
    int yearNumber;
    int majorAvg;
};

int main()
{
    // Declaring the structure
    struct StudentInfo myStudentInfo;

    printf("Welcome to the Uni of Code\n");
    printf("Please Enter your name: ");
    scanf("%s", myStudentInfo.name);

    printf("Please Enter your department name: ");
    scanf("%s", myStudentInfo.department);

    printf("What year are you currently in: ");
    scanf("%d", &myStudentInfo.yearNumber);

    // Printing out user info
    printf("\n+++++++++++++++++++\n");
    printf("Hello there: %s\nDepartment: %s\nYear Number %d\n", myStudentInfo.name, myStudentInfo.department, myStudentInfo.yearNumber);

    return 0;
}