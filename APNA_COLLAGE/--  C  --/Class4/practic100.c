#include <stdio.h>

int main()
{
    int num;
    printf("Ente n(n<2)");
    scanf("%d", &num);

    int fibo[num];
    fibo[0] = 0;
    fibo[1] = 1;
    printf("0\t 1\t");

    for (int i = 2; i < num; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        printf("%d\t", fibo[i]);
    }

    return 0;
}
