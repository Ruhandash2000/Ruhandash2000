//print the factorial of a number 
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int n;
    printf("Enter the number=");
    scanf("%d",&n);

    int facto=1;

    for (int i = 1; i <=n; i++)
    {
        facto*=i;
    }
    printf("%d",facto);

    return 0;
}