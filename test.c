#include<stdio.h>
#include<string.h>

struct Date {
    int Day;
    int Month;
    int Year;
};
struct Information {
    char ID[100];
    char FullName[100];
    struct Date mfg;
    float AvrAL, AvrCAl, AvrBP;
    // float AvrOf3; 
};

int main(){
    //ENTER NUMBER OF STUDENTS
    int numberOfStudents;
    Nhap:
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);
    if(numberOfStudents > 1000 || numberOfStudents <= 0) goto Nhap;

    struct Information students[numberOfStudents];

    //ENTER INFORMATION
    // for (int x = 0; x < numberOfStudents; x++){
    //     printf("Information of student %d\n", x +1 );
    //     printf("Student ID: ");
    //     scanf("%s", students[x].StudentID);
    //     printf("Name: ");
    //     scanf("%s", students[x].FullName);
    //     printf("Birth Date: ");
    //     scanf("%d %d %d", &students[x].Day, &students[x].Month, &students[x].Year);
    //     printf("GPA of Algebra: ");
    //     scanf("%f", &students[x].AvrAL);
    //     printf("GPA of Calculus: ");    
    //     scanf("%f", &students[x].AvrCAl);
    //     printf("GPA of Basic Programming: ");
    //     scanf("%f", &students[x].AvrBP);
    // }

    for (int i = 0; i < numberOfStudents; i++) {
        printf("Information of student %d\n", i+1);
        fflush(stdin);
        printf("Student ID: ");
        scanf("%s", students[i].ID);
        fflush(stdin);
        printf("Name: ");
        scanf("%s", students[i].FullName);
        fflush(stdin);
        printf("Birth Date (dd-mm-yyyy): ");
        scanf("%d-%d-%d", &students[i].mfg.Day, &students[i].mfg.Month, &students[i].mfg.Year);
        fflush(stdin);
        printf("GPA of Algebra: ");
        scanf("%f", &students[i].AvrAL);
        fflush(stdin);
        printf("GPA of Calculus: ");
        scanf("%f", &students[i].AvrCAl);
        printf("GPA of Basic Programming: ");
        scanf("%f", &students[i].AvrBP);
        printf("------------------------\n");
    }

    //PRINT LIST AS TABLE TO SCREEN
    printf("+----------+----------------------------+--------------------+-----------+------------+---------+-------+\n");
    printf("|Student ID|            Name            |        Birth       |GPA Algebra|GPA Calculus|GPA Basic|GPA All|\n");
    printf("+----------+----------------------------+--------------------+-----------+------------+---------+-------+\n");
    for (int i = 0; i < numberOfStudents; i++) {
        printf("| %s | %-15s | %d/%d/%d  |   %.2f    |   %.2f    |    %.2f   |\n", students[i].ID,students[i].FullName,students[i].mfg.Day, students[i].mfg.Month, students[i].mfg.Year,students[i].AvrAL,students[i].AvrCAl,students[i].AvrBP);
        printf("+----------+----------------------------+--------------------+-----------+------------+---------+-------+\n");
    }
    }        