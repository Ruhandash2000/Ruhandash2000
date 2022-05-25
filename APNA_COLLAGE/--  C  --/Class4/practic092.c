 //                                               >>>>>>>>>>>>>Using Double<<<<<<<<<<<<<<<<<<<<<<      

#include<stdio.h>
void  area(float b,float d);
int main()
{
    float a,h;
    printf("Enter the Base and height: ");
    scanf("%f%f",&a,&h);
    area(a,h);
}
void  area(float b,float d)
{
    float result = .5 * b * d;
    printf("The Area of Triangle is: %f",result);
}