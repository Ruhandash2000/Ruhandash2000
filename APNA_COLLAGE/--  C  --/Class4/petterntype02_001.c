#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,raw, colum;
    printf("Enter N:");
    scanf("%d",&num);
     for (raw = num; raw>=1; raw--)
     {
        for (colum =1; colum<=raw; colum++)
        {
            printf("%d",raw);
        }
        
        printf("\n");
     }
     

    return 0;
}
