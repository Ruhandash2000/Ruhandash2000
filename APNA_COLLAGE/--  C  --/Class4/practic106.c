// student information
#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll;
    float marks;
};
int main()
{
    int n, i;

    printf("Enter your total student:");
    scanf("%d", &n);
    struct student student[50];
    // student information stored
    for (i = 0; i < n; i++)
    {
        printf("Enter your %d student name: ", i + 1);
        fgets(student[i].name, sizeof(student[i].name), stdin);
        printf("Enter %d student roll:", i + 1);
        scanf("%d", &student[i].roll);
        printf("Enter %d student total marks:", i + 1);
        scanf("%f", &student[i].marks);
    }
    printf("Display the student information.\n\n");
    // student information display
    for (i = 0; i < n; i++)
    {
        printf("Your %d student name is: %s", i + 1);
        puts(student[i].name);
        printf("%d student roll is:%d\n\n", i + 1, student[i].roll);
        printf("%d student total marks is:%.2f\n\n", i + 1, student[i].marks);
    }
}