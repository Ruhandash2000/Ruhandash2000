#include<stdio.h>
int sum(int x, int y);
int main()
{
    int a,b;
    printf("The valu of a:");
    scanf("%d",&a);
    printf("The valu of b:");
    scanf("%d",&b);

    int s= sum(a,b);
    printf("%d",s);
    return 0;
}

int sum(int x , int y){
    
    return x+y;
}
