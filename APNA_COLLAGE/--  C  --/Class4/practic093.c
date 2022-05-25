#include<stdio.h>
main()
{
   double a, b, c, result;
 
   printf("\n Please Enter the three sides\n");
   scanf("%lf%lf%lf",&a,&b,&c);
 
   AOTCal(a, b, c);
}
 
void AOTCal( double a, double b, double c )
{
   double s, result;
 
   s = (a+b+c)/2;
   result = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle = %lf\n", result);
   
}