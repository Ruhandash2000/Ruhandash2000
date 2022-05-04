#include<stdio.h>
int main()
{
    int age= 22;
    int _age= 23;
    int *ptr= &age;
    int *pptr= &_age;

    printf("Difference = %u\n",ptr-pptr);
   // printf("Difference = %u\n",*ptr-*pptr);
    printf("ptr = %u\n",ptr);
    printf("pptr= %u\n",pptr);
    //
    pptr=&age;
    if (pptr==ptr)
    {
        printf("True\n");
    }else
    {
        printf("False\n");
    } 
    printf("comperizon 0=false , 1=true : %u\n",ptr==pptr);
    printf("ptr = %u\n",ptr);
    printf("pptr= %u\n",pptr);
    return 0;
}
