#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,raw ,col;
    printf("Enter The N:");
    scanf("%d",&num);


     
    for ( raw=num; raw>=1 ; raw--)
    {
        for (col = 1; col <=num-raw; col++)
        {
            printf(" ");
        }
        
        for (col = 1; col <=raw; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
