#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num , raw, clum;
    scanf("%d",num);

    for (raw=1; raw<=num; raw++)
    {
        for (clum = num; clum<=raw; clum++)
        {
            printf("%d");
        }
        
        printf("\n");
        
    }
    

    return 0;
}
