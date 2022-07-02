// write a c program to calculate the sum of the following series 1 + 2^2 + 3^3 + ....+ n^n
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, i);
    }
    printf("The sum of the series is: %d", sum);
    return 0;
}
