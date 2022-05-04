#include<stdio.h>

int dowork(int a , int b,int *sum, int *avg,int *prod);

/*
char proguct(char a, char b);
int average(int a , int b);*/

int main()

{   
    int a, b ;
    a=20,b=30;
    int sum, avg,prod;

    
    dowork(a ,b,&sum,&prod,&avg);
    printf("The sum is=%d\n",sum);
    printf("The avg is= %d\n",avg);
    printf("teh prob is =%d\n",prod);




    printf("The sum %d");


  return 0;
}

    int dowork(int a , int b,int *sum, int *avg,int *prod){

        *sum=a+b;
        *avg=(a+b)/2;
        *prod=a*b;


}
















  /*  proguct(a, b);
    average(&a ,&b);   */
/*
    printf("sum of avarae value of a and b :");
    printf("Average of avarae value of a and b :");
    printf("product name of a and b :%d,%d",a,b);
  
//

//

char proguct(char a, char b){

}
//
int average(int a , int b){


}
*/