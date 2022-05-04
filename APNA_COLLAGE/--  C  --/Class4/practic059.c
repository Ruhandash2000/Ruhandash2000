#include<stdio.h>
int factorial(int num);
int main()
{
    int num;
    printf("Enter a value :");
    scanf("%d",&num);

    int fact= factorial(num);
    printf("factorial of %d=%d",num,fact);
    
    return 0;
}

int factorial(int num){
    if (num==1)
    {
        return 1;
    }
    
    int onemin=factorial(num-1);
    int factoN= onemin*num;
    return factoN;
}
