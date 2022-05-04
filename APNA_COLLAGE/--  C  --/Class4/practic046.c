// adding 18% vat in 
#include<stdio.h>
//
float vat(float value);
//
int main()
{
    float value ;
    printf("The actual value of an item :");
    scanf("%f",&value);

    float sum = vat(value);
    printf("%.2f",sum);

    return 0;
}
//
//
float vat(float value){
    return value = value +(value * 0.18);
}