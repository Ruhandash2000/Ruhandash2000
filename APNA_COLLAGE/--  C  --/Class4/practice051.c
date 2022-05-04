#include<stdio.h>

void fast(int num);
void  scond(int num);

int main()

{
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);

    fast(num);

    return 0;
}

//
void fast(int num){
    int y;
    if (num % 2 == 0)
    {
        printf("Ever");
    }else
    {
        scond(y);
    }
    
}


void scond(int y){
    printf("odd");

}