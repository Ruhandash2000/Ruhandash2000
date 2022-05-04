#include<stdio.h>
#include<math.h>
//
void squ0(float a);
float squ1(float a);
//
void circ0(float r);
float circ1(float r);
//
void ract0(float  l,float  w);
float ract1(float l,float  w);
//
int main()
{
    float a,r,l,w;


//
    printf("The value of Side of squre:");
    scanf("%f",&a);
//   



//  
  printf("The value of Redious of Circle:");
   scanf("%f",&r);
//



//
    printf("The value of ractangles width :");
    scanf("%f",&w);
    printf("The value of ractangles langth :");
    scanf("%f",&l);

//



//
    squ0(a);
    //
    float s = squ1(a);
    printf("The area of the squre : %.2f\n",s);
//



//
    circ0(r);
    //
    float c = circ1(r);
    printf("The area of a circle= %.2f\n",c);
//



//
    ract0(l,w);
    //
    float rac=ract1(l,w);
    printf("The area of Ractangl %.2f\n",r);
//



    return 0;
}
//
void squ0(float a){
    
    printf("The area of the squre= %.2f\n",a*a);

}
float squ1(float a){
    return a*a;

}
//
void circ0(float r){
    float p= 3.1416;
    printf("The area of a circle= %.2f\n",p*r*r);

}
float circ1(float r){ 
    float p=3.1416;
    return p*r*r;

}
//
void ract0(float  l,float  w){
    printf("The area of Ractangl %.2f\n",w*l);

}
float ract1(float l,float  w){
    return w*l;

}
//