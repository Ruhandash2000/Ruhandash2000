#include<stdio.h>

void printnum(int *ptr, int n);
int main()
{   int arr[]={2,3,4,6,78,2};

    printnum(arr,6);

    return 0;
}

void printnum(int *ptr, int n){
    for (int i = 0; i <n; i++)
    {
       printf("%d \t",*(ptr+i));
    }
    printf("\n");
}