#include<stdio.h>
int main()
{
    // 2 students and 3numbers
     
    int marks [2][3];//1st will store 1st students number \ than it will store 2nd students 3 numbers
    
    printf("The valus of 1st student marks : ", marks[0][0] ,marks[0][1], marks[0][2]);
    
    scanf("%d,%d,%d", &marks[0][0] ,&marks[0][1], &marks[0][2] );


     
   /*
    int marks[1][0]= 90;
    int marks[1][1]= 89;
    int marks[1][2]= 78;
   */
    printf("%d",marks[0][0]);


    return 0;
}
