
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,raw,col;
    printf("Enter N:");
    scanf("%d",&num);
    for (raw = 1;raw<=num;raw++)
    {
        for (col =1; col<=num; col++)
        {
            if (raw==1||col==1||raw==num||col==num)
            {
                printf("# ");
            } 
            else
            {
                printf("  ");
            }
        } printf("\n");
        
    }
    
    return 0;
}
