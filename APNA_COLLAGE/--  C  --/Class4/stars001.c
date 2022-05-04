#include<stdio.h>
int main()
{
    int num,raw,col;
    printf("Enter N: ");
    scanf("%d",&num);
    //
    for ( raw = 1; raw<=num; raw++)
    {
        for (col = 1; col<= num-raw; col++)
        
            printf(" ");
        
         for (col = 1; col <= raw; col++)
        
            printf("*");
        
        for (col =raw -1; col >=1; col--)
        
            printf("*");
        
        
        
        printf("\n");
    }
    //
     for ( raw = num-1; raw>=1; raw--)
    {
        for (col = 1; col<= num-raw; col++)
        
            printf(" ");
        
         for (col = 1; col <= raw; col++)
        
            printf("*");
        
        for (col =raw -1; col >=1; col--)
        
            printf("*");
        
        printf("\n");
    }
    
    return 0;
}
