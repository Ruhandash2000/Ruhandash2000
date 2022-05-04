//recursive function

#include<stdio.h>

void printhw(int count);

int main()
{
    int count;
    printf ("How many times should be count :");
    scanf("%d",&count);

    printhw(count);
    
    return 0;
}

void printhw(int count)
{
    if (count ==0)
    {
        return;
    }
    
    printf("HELLO!\n");
    count0(count-1);
}