//                                 >>>>>>>>>>>>>>write a function to reverse an array<<<<<<<<<<< 
#include<stdio.h>
int reverse(int arr[],int n);
void printarr(int arr[],int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    reverse(arr,7);
    printarr(arr,7);
    return 0;
}
//for reverse
int reverse(int arr[],int n)
{
 for (int i = 0; i < n/2 ; i++)
    {
        int fastval= arr[i];
        int scondval=arr[n-i-1];
        arr[i]=scondval;
        arr[n-i-1]=fastval; 
    }
}
//for print array
void printarr(int arr[],int n)
{   
    for (int i = 0; i <n; i++)
    {
        printf("%d\t",arr[i]);   
    }
    printf("\n");
}