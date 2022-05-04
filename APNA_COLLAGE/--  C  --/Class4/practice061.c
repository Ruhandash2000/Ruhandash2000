#include <stdio.h>
int main() 
{
   int n, ar[15];

   int *pt;
    printf("Enter the Size of Array: ");
   scanf("%d",&n);
   pt = &ar[0];   

   for(int i=0;i<n;i++)
      {
	  
      scanf("%d",pt);
	  pt++;

	  } 	
	
   pt = &ar[n - 1];


   for (int i = n; i > 0; i--) 
   {
      printf(" %d ",*pt);
      pt--;
   }

printf("\n\n\n\n");
}