// make a program to input student information from a user & enter it into a file.
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Student.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name : ");
    scanf("%s", name);
    printf("Enter age : ");
    scanf("%d", &age);
    printf("Enter cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fp, "Student name : %s\n", name);
    fprintf(fp, "Student age : %d\n", age);
    fprintf(fp, "Student CGPA : %f\n", cgpa);

    fclose(fp);
}