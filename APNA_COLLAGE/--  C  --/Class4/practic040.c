#include<stdio.h>
void india();
void france();
int main()
{
    char name;
    printf("1st letter of india or france :");
    scanf("%c",&name);
    if (name == 'i')
    {
       india();
    }else
    {
        void france();
    }
    
    

    return 0;
}
//
void india(){

      printf("Nmaste");

}
//
void france(){
  
        printf("Bonjur");
    

}