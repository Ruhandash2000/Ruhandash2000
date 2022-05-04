#include<stdio.h>
void celtofer(float c);
void fartocel(float f);
int main()
{
    float num;
    printf("the valeof celcious : ");
    scanf("%f",&num);

    fartocel(num);
    
    return 0;
}

void celtofer(float c){
    printf("THE calcious value is : %f",c*1.8+32);
}
void fartocel(float f){

 printf("THE farenhight value is : %f",(f-32)/1.8);
}