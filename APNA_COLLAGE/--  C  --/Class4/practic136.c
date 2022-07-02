#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ruhan.txt", "r");
    if (fptr == NULL)
    {
        printf("Error!\n");
    }
    else
    {
        fclose(fptr);
    }

    return 0;
}
