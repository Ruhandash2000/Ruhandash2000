#include<stdio.h>
//
int count( int i ,int num , int count );
//
int main()
{
    int num ,count=0,i;
    printf("Enter N:");
    scanf("%d",num);
  
    int c =    ( i , num , count );

     if (c== 0)
         {
             printf("Prime");
         }else
         {
             printf("NOT Prime");
         }
    
    return 0;
}

//

int count( int i ,int num , int count ){

 return(for (i = 2; i <num; i++)
    {
        if (num % i ==0)
        {
            count++;
            break;
        }
        
    } 
    );

}