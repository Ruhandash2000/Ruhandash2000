#include<stdio.h>
int main()
{
    for (int i =  1; i <5 ; i++)
    {
        printf("%d",i);
        {if (i==1)
        {
            continue;
        }
            printf("%d\n",i);
        }
        return 0;
}
