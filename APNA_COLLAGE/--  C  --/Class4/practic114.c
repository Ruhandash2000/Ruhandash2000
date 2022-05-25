#include <stdio.h>
#include <string.h>
int main()
{
    char faststr[] = "Apple";
    char secondstr[] = "Banana";
    printf("%d", strcmp(secondstr, faststr));
    return 0;
}
