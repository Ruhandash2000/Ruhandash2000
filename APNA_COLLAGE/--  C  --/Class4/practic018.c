#include<stdio.h>
int main()
{
    int num ,raw, clo;
    printf("Enter N:");
    scanf("%d",&num);
    // fast loop
    /*
    for (raw=1; raw <= num ; raw++)
    {
        for (clo = 1; clo<=num-raw; clo++)
        {
            printf(" ");

            for (clo = 1; clo<=raw; clo++)
            {
                printf("%d",clo);
            }
            
        }
        
    }
    */
    //
    //
    for (raw=num; raw >=1; raw--)
    {
        for (clo = 1; clo<=num-raw; clo++)
        {
            printf(" ");

            for (clo = 1; clo<=raw; clo++)
            {
                printf("%d",clo);
            }
            
        }
        
    }
    

    return 0;
}
