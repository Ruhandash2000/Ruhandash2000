#include<stdio.h>


int main()
{
    int x=6;
    int *ptr=&x;
    int b= *ptr;
    int **pptr=&ptr;
    printf("Value of x:%d\n ",x); //vslue of x
    printf("Value of b:%d\n ",b); // value of b
    printf("Value of *ptr:%d\n ",*ptr); // *= vale of adress pointer ,  *ptr a store adress x er , so thevalu is valu of x
    printf("Adress of &x:%p\n ",&x); //
    printf("Adress of &x:%u\n ",&x); //
   // printf("adress of ptr:%d\n ",ptr);// 
    printf("adress of ptr:%p\n ",ptr);//
    printf("Adress of ptr:%u\n ",ptr);//
    printf("Adress of &b:%p\n ",&b);//
    printf("Adress of &b:%u\n ",&b);//
    printf("Adress of &ptr:%p\n ",&ptr);//
    printf("Adress of &ptr:%u\n ",&ptr);//
    printf("Value of *(&x):%d\n ",*(&x));//
    printf("Adress of pptr:%p\n ",pptr);//
    printf("Adress of **pptr:%p\n ",&pptr);//
    printf("Adress of **pptr:%d\n ",**pptr);//
    return 0;
}
