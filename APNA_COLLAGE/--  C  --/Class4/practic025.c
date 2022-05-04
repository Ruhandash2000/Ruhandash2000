#include<stdio.h>
int main()
{   
    int num,raw,col;
    printf("Enter N : ");
    scanf("%d",&num);
    for (raw = num; raw >=1 ; raw--)
    {
        for (col = 1; col <=num-raw; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= raw*2-1; col++)
        {
            printf("%d",raw);
        }printf("\n");
        
    }
    
    return 0;
}
