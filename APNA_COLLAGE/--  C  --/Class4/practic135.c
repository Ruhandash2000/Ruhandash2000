// area of a circle & circumference of a circlesexsexsexsexsexsexsexsex
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("halarpo area hoitese %f\n", area);
    printf("Circumference of the circle is %f\n", circumference);
    return 0;
}