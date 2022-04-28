#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter any natural Number:");
    scanf("%d",&n);

    for (int i = 1; i<=n ; i++)
    {
        if (i == n)
        {
            break;
        }
        
        printf("%d\n",i);
    }
    
    printf("Its the endding ^_^  ");

    return 0;
}

