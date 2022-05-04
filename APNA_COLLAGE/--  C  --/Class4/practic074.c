#include<stdio.h>
void swep(int *a , int *b);

int main()

{
    int a=2, b=3;

/*
    int temp=a;
    a=b;
    b=temp;
    printf(" value of A : %d\n",b);
    printf(" value of B : %d\n",a);
*/
/*
    int *prt=&a;
    int *pprt=&b;
    */

/*
    int x= *prt;
    *prt=*pprt;
    *pprt=x;

    printf(" value of A : %d\n",*prt);
    printf(" value of B : %d\n",*pprt);
*/
/* 
    int x= *prt;
    *prt=*pprt;
    *pprt=x;

    a=*prt;
    b=*pprt;

    printf(" value of A : %d\n",a);
    printf(" value of B : %d\n",b);
 */   
    swep(&a , &b);

    printf(" value of A : %d\n",a);
    printf(" value of B : %d\n",b);


    return 0;
}

void swep(int *a , int *b){
int t=*a;
*a=*b;
*b=t;

    printf(" value of A : %d\n",a);
    printf(" value of B : %d\n",b);


}