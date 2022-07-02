#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Ruhan.txt", "a");
    fprintf(fptr, "%c", 'F');
    fprintf(fptr, "%c", 'u');
    fprintf(fptr, "%c", 'c');
    fprintf(fptr, "%c", 'k');
    fprintf(fptr, "%c", 'o');
}
