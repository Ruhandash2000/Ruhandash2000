#include<stdio.h>
void suma(int num);

int main()
{
    int num ;
    printf("Enter N : ");
    scanf("%d",&num);
    
    suma(num);
    
    return 0;
}

void suma(int num ){

   int sum = 0;
    while (num!=0)
    {
        sum+=num % 10;
        num=num/10;
    }
    
    printf("%d",sum);



}