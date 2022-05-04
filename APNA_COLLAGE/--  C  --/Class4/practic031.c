
#include<stdio.h>
int main()
{
    int num,raw,col;
    printf("Enter N:");
    scanf("%d",&num);
    //
    for (raw = 1;raw<=num;raw++)
    {
        for (col =1; col<=num; col++)
        {
            if (raw==col||raw+col==num+1)
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }
        } printf("\n");   
    }
    return 0;
}