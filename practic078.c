#include<stdio.h>
int main()

{
    float value[]={100.0,200.0,300.0};
    /*
    float value[3];
    printf("Enter value of ball :");
    scanf("%f",&value[0]);
    printf("Enter value  of bat :");
    scanf("%f",&value[1]);
    printf("Enter value of stamp :");
    scanf("%f",&value[2]);
    */
    printf("tHE value withe gst in ball is = %.2f\n",value[0]+((value[0]*18)/100));
    printf("tHE value withe gst in bat is = %.2f\n",value[1]+((value[1]*18)/100));
    printf("tHE value withe gst in stamp is = %.2f\n",value[2]+((value[2]*18)/100));


    return 0;
}
