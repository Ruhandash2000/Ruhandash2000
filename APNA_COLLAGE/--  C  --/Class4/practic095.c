#include<stdio.h>

int main()
{
    float price[3];

    printf("Enter three prices : ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("the price of 1st item is %f\n",(price[0]+(price[0]*18)/100));
    printf("the price of 2nd item is %f\n",(price[1]+(price[1]*18)/100));
    printf("the price of 3rd item is %f\n",(price[2]+(price[2]*18)/100));



    return 0;
}
