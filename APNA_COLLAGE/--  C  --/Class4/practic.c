#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ruhan.txt", "w");

    fprintf(fptr, "%c", 'F');
    fprintf(fptr, "%c", 'i');
    fprintf(fptr, "%c", 'l');
    fprintf(fptr, "%c", 'e');
    fprintf(fptr, "%c", ' ');

    fclose(fptr);
    return 0;
}