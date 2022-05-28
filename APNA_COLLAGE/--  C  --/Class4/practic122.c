#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student EEC[100];
    struct student COE[100];
    struct student IT[100];
    // Ruhan
    EEC[0].roll = 1;
    strcpy(EEC[0].name, "Ruhan");
    EEC[0].cgpa = 3.00;
    // Sakib
    EEC[1].roll = 2;
    strcpy(EEC[1].name, "Sakib");
    EEC[1].cgpa = 3.40;
    // Obaydulla
    EEC[2].roll = 3;
    strcpy(EEC[2].name, "Obaydulla");
    EEC[2].cgpa = 3.50;
    printf("EEC [0] = %s\n", EEC[0].name);
    printf("EEC [0] = %d\n", EEC[0].roll);
    printf("EEC [0] = %f\n", EEC[0].cgpa);
    printf("EEC [1] = %s\n", EEC[1].name);
    printf("EEC [1] = %d\n", EEC[1].roll);
    printf("EEC [1] = %f\n", EEC[1].cgpa);
    printf("EEC [2] = %s\n", EEC[2].name);
    printf("EEC [2] = %d\n", EEC[2].roll);
    printf("EEC [2] = %f\n", EEC[2].cgpa);

    return 0;
}
