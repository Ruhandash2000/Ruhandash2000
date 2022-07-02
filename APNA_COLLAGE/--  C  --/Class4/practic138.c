#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ruhan.txt", "r");
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("%d\n", ch);
    fclose(fptr);
    return 0;
}