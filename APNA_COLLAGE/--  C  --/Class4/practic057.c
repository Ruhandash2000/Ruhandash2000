#include<stdio.h>
 
int main()
{
    int a,b;
    printf("enter The value of a : ");
    scanf("%d",&a);
    printf("enter The value of b : ");     
    scanf("%d",&b);

    int *p=&a;
    int *q=&b;

    if (*p>*q)
    {
        printf("%d",*p);
    }else
    {
        printf("%d",*q);
    }

    return 0;
}
