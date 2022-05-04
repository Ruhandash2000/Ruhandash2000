#include<stdio.h>
int main()
{   int a=5;

    int *ptr=&a;
    int _a=*ptr;
    printf("the adress of &a:%d\n ",&a);
    printf("the adress of a:%d\n ",a);
    printf("the adress of *ptr:%d \n",*ptr);
    printf("the adress of _a:%d\n` ",_a);
    return 0;
}
