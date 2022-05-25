#include <stdio.h>

void printstring(char arr[]);
int main()
{
    char fastname[] = "Ruhan";
    char lestname[] = "Dash";

    printstring(fastname);
    printstring(lestname);

    return 0;
}
void printstring(char array[])
{
    for (int i = 0; array[i] != '\0'; i++)
    {
        printf("%c", array[i]);
    }
    printf("\n");
}