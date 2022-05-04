#include<stdio.h>

int fibonacci(int num);

int main()
{
    int num;
    printf("Enter N : ");
    scanf("%d",&num);

    int sum = fibonacci(num);
    printf("%d",sum);
   
    return 0;
}

int fibonacci(int num){
    if (num==0|| num==1){
    if (num==0){
      return 0;
    }if (num==1){
        return 1;
    }
    }
    
    int fiboNM1=fibonacci(num-1);
    int fiboNM2=fibonacci(num-2);
    int fiboN= fiboNM1+ fiboNM2;
    return fiboN;
}
