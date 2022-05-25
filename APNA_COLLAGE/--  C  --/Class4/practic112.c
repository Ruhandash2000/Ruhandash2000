#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char newname[] = "ruhan";
    char oldname[] = "Dash";
    strcpy(newname, oldname);
    printf(newname);

    return 0;
}
