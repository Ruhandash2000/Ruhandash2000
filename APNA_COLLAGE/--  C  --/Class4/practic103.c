#include <stdio.h>
void printname(char arr[]);

int main()
{
    char fastname[] = "Ruhan Dash";
    char lestname[] = "Dibya";

    printname(fastname);
    printname(lestname);
    return 0;
}
void printname(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}