// make a program to read  5 integer from a file.
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Ruhan.txt", "r");
    int i;
    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);

    fscanf(fptr, "%d", &i);
    printf("%d\n", i);
    fclose(fptr);
}
/*
{
    FILE *fp;
    int i, num[5];
    fp = fopen("Ruhan.txt", "r");
    for (i = 0; i < 5; i++)
    {
        fscanf(fp, "%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
    fclose(fp);
    return 0;
}
*/
/*
{
    int a, b, c, d, e;
    FILE *fp;
    fp = fopen("Ruhan.txt", "r");
    fscanf(fp, "%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", a, b, c, d, e);
    fclose(fp);
    return 0;
}
 */