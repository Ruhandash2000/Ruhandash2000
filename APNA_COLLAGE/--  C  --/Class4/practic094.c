
// Program in C to print the Hollow Star Triangle Pattern
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows to show the star pattern: ");
    scanf("%d",&n);
    for (int i=1; i <= n ; i++)
    {
        if (i==n)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
    for (int j=1; j< n*2 ; j++)
    {
        int k=n-j;
        int l=n+j;
        for(int m=1; m<n*2 ; m++)
        {
            if (m==k)
            {
                printf("*");
            }
            else if (m==l)
            {
                printf("*\n");
                break;
            }
            else if (k==1)
            {
                for(k; k<=n*2-2;k++)
                {
                    printf("*");
                }
                break;
            }
            else
            {
                printf(" ");
            }
        }
    }

}