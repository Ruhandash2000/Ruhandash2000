#include<stdio.h> 
#include<math.h>

void pow01 (int a,int b);

int pow02(int a,int b);

int main()
{
    int a, b;
    printf("Enter a NUmber : ");
    scanf("%d",&a);
    printf("Enter a the numbers power : ");
    scanf("%d",&b);
     
    pow01 (a,b);
    
    int p=pow02(a, b);
    printf("%d to the power %d= %d\n",a,b,p);




    return 0;
}

//

void pow01 (int a,int b){

        int s= pow(a,b);

            printf("%d to the power %d= %d \n",a,b,s);
}

//

int pow02(int a,int b){
    return pow(a,b);

}

//