#include<stdio.h>

//

int sum (int n);

int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);

    sum (n);

    return 0;
}

//

int sum (int n){
   
    int c= sum(n-1);
    int b =c +n;
    

    return ;
}