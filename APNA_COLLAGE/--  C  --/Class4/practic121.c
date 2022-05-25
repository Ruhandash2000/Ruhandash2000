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
    struct student s1;
    s1.roll = 23;
    s1.cgpa = 3.8;
    // s1.name = "Ruhan";//
    strcpy(s1.name, "ruhan");

    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
    printf("%f\n", s1.cgpa);

    struct student s2;
    s2.roll = 25;
    s2.cgpa = 3.5;
    // s1.name = "Ruhan";//
    strcpy(s2.name, "dibya");

    printf("%s\n", s2.name);
    printf("%d\n", s2.roll);
    printf("%f\n", s2.cgpa);
    struct student s3;
    s3.roll = 25;
    s3.cgpa = 3.45;
    strcpy(s3.name, "Rajat");

    printf("%s\n", s3.name);
    printf("%d\n", s3.roll);
    printf("%f\n", s3.cgpa);

    return 0;
}
