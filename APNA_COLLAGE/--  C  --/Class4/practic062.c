#include<stdio.h>

int calculatepar(int science , int math, int hindu);
int main()
{
    int science, math, hindu;
    printf("The mark in science : ");
    scanf("%d",&science);
    printf("The mark in math : ");
    scanf("%d",&math);
    printf("The mark in hindu : ");
    scanf("%d",&hindu);
    int sum=calculatepar(science,math,hindu);
    printf("%d ",sum);

    return 0;
}
    int calculatepar(int science , int math, int hindu){

    return((science+math+hindu)/3);


    }
