#include<stdio.h>
int main()
{
    int num , raw, col;
    printf("The number:");
    scanf("%d",&num);
    //
    for (raw = 1; raw <=num; raw++)
    {
        for (col = 1 ; col <=num-raw; col++)
        {
            printf(" ");
        } for (col = 1; col <=num ; col=col+2)
        {
            printf("%d",raw);
        }
        
        printf("\n");
    }
    
    return 0;
}
