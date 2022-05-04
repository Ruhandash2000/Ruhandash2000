#include<stdio.h>
//
int sum(int a, int b);
//
void printable(int n);
//
int main()
{
    int n;
    printf("The Value of N:");
    scanf("%d",&n);

    printable(n);  // in calling satement we used argument or actual parameter

    return 0;
}
//
int sum (int a ,int b){
    return a+b;
}
//
void printable(int n)   //parameter/formal parameter
    {
    for (int i = 1; i <=10 ; i++)
    {
        printf(" %d X %d : %d  \n",n,i,i*n);
    }

}
//