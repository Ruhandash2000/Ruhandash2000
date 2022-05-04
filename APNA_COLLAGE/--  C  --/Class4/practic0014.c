#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num , raw , col;
    printf("Enrte any number:");
    scanf("%d",&num);
    for (raw = num; raw >=1 ; raw)
    {
        for (col = 1; col<= num-raw; col++)
        {
            for (col = raw; col >= raw; col++)
            {
                printf("%d",col);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}
