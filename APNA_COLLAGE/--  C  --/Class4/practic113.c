#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char fast[100] = "Ruhan ";
    char scond[] = "Dash";
    strcat(fast, scond);
    puts(fast);

    return 0;
}
