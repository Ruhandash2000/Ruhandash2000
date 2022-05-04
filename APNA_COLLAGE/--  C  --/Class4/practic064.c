#include<stdio.h>
int main()
{
    int num,i,j;

    printf("Enter N");
    scanf("%d",num);

    for ( i = num , j= num; i <= num-1, j<= num -2 ; i--, j--)
    {
        printf("%d", i+j );

    if (i==0||j==0)
    {
        return 0;
    }if (i==1||j==01){
        return 1;
    }
    }
    printf("%d",num);

    
    return 0;
}

