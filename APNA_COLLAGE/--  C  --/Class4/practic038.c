#include<stdio.h>

void space(int num,int raw);

void colum(int raw);

void colum2(int raw);

int main()
{
    int num, raw ,col;
    printf("Enter N:");
    scanf("%d",&num);
    //
    for (raw = 1; raw<=num; raw++)
    {
      space(num,raw);
      colum(raw);
      colum2(raw);
      printf("\n");
    } 
    //
    for (raw =num-1; raw>=1; raw--)
    {
       space(num,raw);
       colum(raw);
       colum2(raw);
      printf("\n");
    } 

    return 0;
}
//
//
//
void space(int num,int raw ){
    int col ;
    for ( col=1; col<=num- raw; col++)
    {
        printf(" ");
    }
}
//
//
//
void colum(int raw){
   int col;
    for (col = 1; col <= raw; col++)
    {
        printf("*");
    }
    
}
//
//
//
void colum2(int raw){
    for (int col = raw; col>=2; col--)
    {
        printf("*");
    }
    
}
//
//
//
