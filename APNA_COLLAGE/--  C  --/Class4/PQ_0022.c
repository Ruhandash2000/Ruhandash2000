#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n ,table;
    printf("Ente any number ");
    scanf("%d",&n);

    for (int i = 10; 1 <= i; i--)
    {
        table=i*n;
        printf("%d x %d = %d\n",i,n,table);   
    }    
    return 0;
}
