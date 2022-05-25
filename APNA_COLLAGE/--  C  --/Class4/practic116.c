// the way to secure a pasword is salting
#include <stdio.h>
#include <string.h>
void salting(char pass[]);
int main()
{
    char strp[100];
    scanf("%s", strp);
    salting(strp);
    return 0;
}
void salting(char pass[])
{
    char salt[] = "123";
    char newpa[200];
    strcpy(newpa, pass);
    strcat(newpa, salt);
    puts(newpa);
}