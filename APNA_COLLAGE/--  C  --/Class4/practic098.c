#include<stdio.h>
void reverse(int arr[],int num);
void printrev(int arr[],int num);
int main() 
{
int arr[]={1,2,3,4,5,6,7,8};
reverse(arr,8);
printrev(arr,8);
    return 0;
}
void reverse(int arr[],int num){
    for (int i = 0; i <num/2; i++){
        int fast = arr[i];
        int scound = arr[num-i-1];
        arr[i]=scound;
        arr[num-i-1]= fast;
    }
}
void printrev (int arr[] ,   int num){
    for (int i = 0; i <num; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
