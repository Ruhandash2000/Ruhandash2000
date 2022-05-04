#include<stdio.h>

void squre(int num);
void _squre(int* num);

int main()
//
{   
    int num;
    printf("Enter N : ");
    scanf("%d",&num);

    squre(num);
    printf("The number is :%d\n ",num);

    _squre(&num);
    printf("The number is :%d\n ",num);

    return 0;
}
//call by value
void squre(int num){
    num = num * num;
    printf("The squre number is  :%d\n ",num);

}
//call By reference
void _squre(int* num){
    *num=(*num)*(*num);
    printf("The squre number is  :%d\n ",*num);

}









