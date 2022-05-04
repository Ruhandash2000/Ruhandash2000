#include<stdio.h>
int main()
{   char i= '*';

    for (char i=1; i<=6;i++ )
    {
        if (i==5)
        {
        break;;
        }
        printf("%c%c%c%c%c \n",i,i,i,i,i);
    }
}
