#include<stdio.h>
int main()
{
    int num , raw ,col;
    printf("Enter N : ");
    scanf("%d",&num);

    for (raw = num; raw >=1; raw--)
    {
    for ( col= raw ; col <= num-raw; col++)
    {
        printf(" ");
    }

    for (col = 1; col <=raw; col++)
    {
        printf("%d",col);
    }
    printf("\n");   
    }
    return 0;
}
