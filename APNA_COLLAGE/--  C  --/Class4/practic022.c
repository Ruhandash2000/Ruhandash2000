#include<stdio.h>
int main()
{
    int num,raw,col;
    printf("Enter N:");
    scanf("%d",&num);

    // 
    for (raw = 1; raw <= num; raw++)
    {
        for (col = 1; col <=raw; col++)
        {
            printf("%d",raw*col);
        }
        printf("\n");
    }
    

    return 0;
}
