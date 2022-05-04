#include<stdio.h>
int main(int argc, char const *argv[])
{
    int h=8;
    int b=h++ + h++ + h++;
    printf("%d\n",h);
    return 0;
}
