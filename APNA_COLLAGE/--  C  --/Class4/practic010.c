#include<stdio.h>
int main()
{
    int num , raw , col;
    printf("Enter any number : ");
    scanf("%d",&num);


    for (raw = 1; raw <= num; raw++)
    {
        for (col = 1; col <=num-raw; col++)
        {
            printf(" ",col);
        }

         for (col = 1; col <=raw; col++)
        {
            printf("%d",col);
        }
        printf("\n");
          
        
    }
    
    return 0;
}
