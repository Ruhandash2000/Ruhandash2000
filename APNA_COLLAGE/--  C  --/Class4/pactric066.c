#include<stdio.h>
double powr(double a,double b);

int main()
{
   double a,b;
   printf("Enter A :");
   scanf("%lf",&a);
   printf("Enter B :");
   scanf("%lf",&b);
   powr(a,b);
   
    
    return 0;
}
double powr(double a,double b){
    int s=a;
    for (int i = 1; i <=b; i++)
    {
       s=s*a; 
       printf("%lf",s);
    }

}