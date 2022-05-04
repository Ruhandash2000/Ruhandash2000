
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num ,raw,clo;
    printf("enter any number :");
    scanf("%d",&num);

    for (raw = 2; raw<=num; raw++)
    {
        for (clo=1; clo<=num  ; clo++)
        {
            printf("*\t") ;
        }
        printf("\n");   
    }
    return 0;
}