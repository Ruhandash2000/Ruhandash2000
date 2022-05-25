// write a function named slice ,which takes a string & returns a sliced string index n to m

#include <stdio.h>
#include <string.h>
void slice(char str[], int n, int m);
int main()
{
    char str[] = "helloworls";
    slice(str, 3, 6);
}

void slice(char str[], int n, int m)
{
    int j = 0;
    char new[100];
    for (int i = n; i <= m; i++, j++)
    {
        new[j] = str[i];
    }
    new[j] = '\0';
    puts(new);
}