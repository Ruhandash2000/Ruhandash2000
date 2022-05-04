#include<stdio.h>

int sum(int num);

int main()
{
    int num;
    printf("ENTER N :");
    scanf("%d",&num);
    
    int k =sum(num);
    printf("%d",k);
    return 0;
}

int sum(int num){
    int summinus1 = sum(num-1);
    int sumtoN=summinus1+num;
    return sumtoN;
}