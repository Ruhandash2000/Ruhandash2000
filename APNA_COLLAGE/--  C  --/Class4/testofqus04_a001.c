#include<stdio.h>
int main(int argc, char const *argv[])
{

   int num , raw , clum;
   printf("print a number");
    scanf("%d",&num);
    for (raw=1; raw <=num ; raw++)
    {
        for (clum=1 ; clum<=raw ; clum++)
        {
            printf("%d",clum);
        }
     printf("\n");   
    }
    

    return 0;
}
