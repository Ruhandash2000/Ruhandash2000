#include<stdio.h>
int main()
{
    int aadhar[5];
    int *ptr= &aadhar;
    //input
    /*
    for (int i = 0; i <5 ; i++)
    {
        printf("%d index :",i);
        scanf("%d",(ptr+i));
    }
    */
   for (int i = 0; i <5 ; i++)
    {
        printf("%d index :",i);
        scanf("%d",&aadhar[i]);
    }
    /*
    for (int i = 0; i<5; i++)
    {
        printf(" %d st persons money = %d\n",i,*(ptr+i));
    }
    */
    for (int i = 0; i<5; i++)
    {
        printf(" %d index = %d\n",i,aadhar[i]);
    }

    return 0;
}
