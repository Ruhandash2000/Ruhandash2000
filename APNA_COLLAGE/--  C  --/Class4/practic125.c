#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printinfo(struct student s1);
int main()
{
    struct student s1 = {"Ruhan", 1, 4.7};
    printinfo(s1);
    printf("%s \n", s1.name);
    return 0;
}
void printinfo(struct student s1)
{

    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);
    printf("%s \n", s1.name);

    strcpy(s1.name, "Dibya");
}
