#include<stdio.h>

int main()
{
    int *p,c;
    printf("Enter the value: ");
    scanf("%d",&c);
    p=&c;
    
    printf("Value of C=%d\n",c);
    printf("Address of C=%d\n",&c);
    printf("Address of C using pointer=%d\n",p);
    printf("Address of C using pointer(&*)=%d\n",&*p);
    printf("Pointer Address=%d\n",&p);
    printf("Pointer Address=%d\n",p);
    return 0;
}