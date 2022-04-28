//print the tableof a number input by the user
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter any number :");
    scanf("%d",&n);
    //
   /*
    for (int i = n; i <= n*10 ; i++)
    {
        printf("%d\n",i);
    }
    */
   //
    for (int i = 1; i <=10; i++)
    {
        int sum = n*i;
        printf("%d x %d = %d\n",n,i,sum);
    }
    return 0;
}
