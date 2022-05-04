#include<stdio.h>
int main()
{
    int num , raw, culum;
    printf("enter The number :");
    scanf("%d",&num);

     for (raw= 1; raw<=num; raw++)
     {
       for ( culum = 1; culum<=raw; culum++)
       {
           printf("%d",raw);
       }
       
     } printf("\n");


    return 0;
}
