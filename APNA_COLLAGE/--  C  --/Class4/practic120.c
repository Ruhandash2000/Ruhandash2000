// cheack if a give charechwe is present in a sting or not
#include <stdio.h>
void cheakchar(char str[], char ch);
int main()
{
    char str[] = "helloWorld";
    printf("Ente a char :");
    char ch;
    scanf("%c", &ch);
    cheakchar(str, ch);

    return 0;
}
void cheakchar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("char is avilable");
            return;
        }
    }
    printf("char i nt avilabel");
}
