#include <stdio.h>
#include <string.h>
void salting(char arr[]);
int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
    return 0;
}
void salting(char arr[])
{
    char salt[7] = "123";
    char newpass[200];
    strcpy(newpass, arr);
    strcat(newpass, salt);
    puts(newpass);
}