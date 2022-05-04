#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num , raw ,col,count=0;
    printf("Enter N :");
    scanf("%d",&num);
    //
    for (raw = 1; raw <= num; raw++)
    {
        for (col = 1; col<= num-raw; col++)
        {
            printf("  ");
        }
        
        for (col = 1; col <=raw; col++)
        {
            printf("%d ",col);
        }
    // 
    
         for (raw = 1; raw <= num; raw++)
         {
        
        for (col = 1; col <=raw; col++)
        {
            printf("%d ",col);
        }
            printf("\n");
        
        
    	 }
}

    return 0;
}
