#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , r , c;
    printf("THE number N: ");
    scanf("%d",&n);


    for ( r= 1; r <=n-1 ; r++)
    {
        for (c = 1; c <=r; c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
     for ( r = n; r>=1 ; r--)
     {
         for (c=1 ; c <=r ; c++)
         {
            printf("%d",r);

         }
         printf("\n");
     }
     
    return 0;
}
