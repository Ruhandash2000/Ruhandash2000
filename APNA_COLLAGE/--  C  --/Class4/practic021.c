#include<stdio.h>
int main()
{
    int num,raw,col;
    printf("ENter am number");
    scanf("%d",&num);
    //fast loop
    for (raw = 2; raw <=num ; raw++)
    {
        for (col= 1; col <=num; col++)
        {
            printf("*");
        }
        printf("\n");
        
    } 
    

    return 0;
}
