#include<stdio.h>
int main()
{
    int n , r, c;
    printf("enter The number :");
    scanf("%d",&n);

     for (r= 1; r<=n-1; r++)
     {
       for ( c= 1; c<=r; c++)
       {
           printf("%d",c);
       }
       printf("\n");
     } 

        for (r= n; r>=1 ; r--)
     {
       for ( c= 1; c<=r; c++)
       {
           printf("%d",c);
       }
       printf("\n");
     } 


    return 0;
}
