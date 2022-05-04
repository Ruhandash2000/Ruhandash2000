#include<stdio.h>
int main()
{   
    int n;
    printf("Enter n (n>2): ");
    scanf("%d",&n);
    int fibo [n];
    fibo[0]=0;
    fibo[1]=1;
    printf("0\t 1\t");
    for (int i = 2; i <n; i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
        printf("%d\t",fibo[i]);
    } printf ("\n");

    return 0;
}
