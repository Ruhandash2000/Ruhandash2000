#include<stdio.h>
//
int sum(int a, int b);
//
int main()
{
    int a,b;
    printf("ENter the value of A :\n");
    scanf("%d",&a);
    printf("ENter the value of B :\n");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("The Sum is : %d \n",s);
    return 0;
}

//
int sum (int a ,int b){
    return a+b;

}
//