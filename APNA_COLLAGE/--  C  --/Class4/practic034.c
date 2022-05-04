#include<stdio.h>
int main()
{
    int num,raw,col;
    printf("Enter N:");
    scanf("%d",&num);
    //
    for (raw = 1;raw <= num ; raw++)
    {
        for (col = 1;col <= num-raw; col++)
    
            printf(" ");
    
        for (col = 1; col <= raw; col++)
        
            printf("%d",col);
        
        for (col = raw-1; col>=1; col--)
            
            printf("%d",col);

            printf("\n");
    }
    
    return 0;
}
