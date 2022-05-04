#include<stdio.h>
int main(int argc, char const *argv[])
{

   int num , raw , clum;
   printf("print a number");
    scanf("%d",&num);
    for (raw=num; 1<=raw ; raw--)
    {
        for (clum=1 ; clum<=raw ; clum++)
        {
            printf("%d",clum);
        }
     printf("\n");   
    }
    

    return 0;
}
