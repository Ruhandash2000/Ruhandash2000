#include<stdio.h>
//
void square(int num);
//
int square0(int num);
//
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);//scanf("%d",&num);//dacnf("%d",&num);
    square(num);

    
    
    int sq= square0(num);
    printf("The squre of number %d is = %d \n",num,sq);

    

    return 0;
}

//
void square(int num){
    int s= num*num;
    printf("The squre of number %d is = %d \n",num,s);

}
//
int square0(int num){
    return num*num;

}
//