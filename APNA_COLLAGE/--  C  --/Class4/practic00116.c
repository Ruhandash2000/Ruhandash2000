#include <stdio.h>
int main() // main function
/*
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    printf("The odd numbers are: ");
    for (i = 0; i < n; i++)
        if (ptr[i] % 2 != 0)
            printf("%d ", ptr[i]);
    printf("\nThe even numbers are: ");
    for (i = 0; i < n; i++)
        if (ptr[i] % 2 == 0)
            printf("%d ", ptr[i]);
    return 0;
}
*/
{
    int num, raw, col;
    printf("enter any number:");
    scanf("%d", &num);
    for (raw = 1; raw <= num; raw++)
    {
        for (col = 1; col <= num - raw; col++)
        {
            printf(" ");
        }

        for (col = 1; col <= raw; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    for (raw = num - 1; raw >= 1; raw--)
    {
        for (col = 1; col <= num - raw; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= raw; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }

    return 0;
}
