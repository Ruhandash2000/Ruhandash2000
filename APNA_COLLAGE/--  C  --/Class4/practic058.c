
#include<stdio.h>
int printsum(int num);
int main()
{
    int num;
    printf("Enter a numbrer : ");
    scanf("%d",&num);
    
    int s=printsum(num);

    printf("The valu of %d is = %d",num,s);
    return 0;
}

int printsum(int num){

    if(num==1){
        return 1;
    }

    int sum=printsum(num-1);
    int sumN=sum+num;
    return sumN;

}