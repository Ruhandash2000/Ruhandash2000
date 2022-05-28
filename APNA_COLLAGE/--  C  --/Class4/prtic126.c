#include <stdio.h>
#include <string.h>
typedef struct computerEndineeringstudent
{
    char name[100];
    int roll;
    float cgpa;
} cse;
//
struct student
{
    char name[100];
    int roll;
    float cgpa;
} stu;
int main()
{
    cse s1;
    s1.roll = 1;
    s1.cgpa = 4.55;
    strcpy(s1.name, "Ruhan");
    printf("%s", s1.name);

    return 0;
}
