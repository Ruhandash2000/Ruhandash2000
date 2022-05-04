#include<stdio.h>
int main()
{
    int num;
    printf("Enter N");
    scanf("%d",num);
    if (num/1 % 1==0||num/num % 1==0)
    {
        printf("Its is a prime number");
    }
    else
    {
        ("The number is not a prime number");
    }
    
    
    return 0;
}
