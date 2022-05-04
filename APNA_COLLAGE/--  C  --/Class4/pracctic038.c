#include<stdio.h>
//diclaration/prototype
void printHello();
int main()
{
    printHello();//functioncall
    printHello();
    printHello();
    return 0;
}
//function defination
void printHello(){
    printf("hello world1!\n");
}