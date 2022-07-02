#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 1.5;
    ptr[1] = 2.5;
    ptr[2] = 3.5;
    ptr[3] = 4.5;
    ptr[4] = 5.5;

    for (int i = 1; i <= 5; i++)
    {
        printf("%f\n", ptr[i]);
    }
    return 0;
}