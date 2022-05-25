#include<stdio.h>
int main()
{
    int marcket[]={100,200,300};
    int * ppt = &marcket[0];
    ppt++;
    printf("%u",*ppt);
    return 0;
}