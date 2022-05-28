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
    struct student s1 = {"Ruhan", 1, 4.67};
    struct student s2 = {"Dibya", 2, 4.50};
    struct student s3 = {0};
    printf(" s1  Name= %s\n", s1.name);
    printf(" s1  Name= %d\n", s1.roll);

    return 0;
}