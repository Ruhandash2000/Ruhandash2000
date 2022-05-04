
#include<stdio.h>
int main()
{
    int num ,raw, clo;
    printf("Enter N:");
    scanf("%d",&num);
    // fast loop
    
    for (raw=1; raw <= num ; raw++)
    {
        for (clo = 1; clo<=num-raw; clo++)
        {
            printf(" ");

        }
                for (clo = 1; clo<=raw; clo++)
            {
                printf("*");
            }
            
        printf("\n");
        
    }

    //
    //
    for (raw=num-1; raw >=1; raw--)
    {
        for (clo = 1; clo<=num-raw; clo++)
        {
            printf(" ");
        }
            for (clo = 1; clo<=raw; clo++)
            {
                printf("*");
            }
            
        printf("\n");
        
    }
    

    return 0;
}
