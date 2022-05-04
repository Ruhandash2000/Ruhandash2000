#include<stdio.h>
int main()
{
    int num, raw, col;
    printf("ENter N :");
    scanf("%d",&num);
    //
    for  (raw = 1; raw<=num ; raw++)
    {
        for (col=1; col<=num; col++)
        {
            if (raw==1||raw==num||col==1||col==num)
            
                printf("* ");
            else
            
               printf("  ");
        }printf("\n");
    
        
    }
    return 0;
}
