#include <stdio.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Ruhan", 1, 4.7};

    struct student *ptr = &s1;
    printf("%d\n", (*ptr).roll);
    printf("%f\n", (*ptr).cgpa);
    printf("%s \n", (*ptr).name);
    //arrow symble 
    printf("%s\n", ptr->name);
    printf("%d\n", ptr->roll);
    printf("%f\n", ptr->cgpa);
    return 0;
}
