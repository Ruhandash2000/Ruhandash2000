// creat a structute to store vector. Then make a function to return the sum of two vectors.
// #include <stdio.h>
// struct vector
// {
//     int x;
//     int y;
// };
// void calsum(struct vector v1, struct vector v2, struct vector sum);
// int main()
// {
//     struct vector v1 = {1, 2};
//     struct vector v2 = {3, 4};
//     struct vector sum = {0};
//     calsum(v1, v2, sum);
//     return 0;
// }
// void calsum(struct vector v1, struct vector v2, struct vector sum)
// {
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;
//     printf("sum of x is %d\n", sum.x);
//     printf("sum of y is %d\n", sum.y);
// }
#include <stdio.h>
struct vector
{
    int x;
    int y;
};
void callsum(struct vector v1, struct vector v2, struct vector sum);
int main()
{
    int a, b, c, d;
    printf("\nenter the value of x1 :");
    scanf("%d", &a);
    printf("\nenter the value of x2 : ");
    scanf("%d", &b);
    printf("\nenter the value of y1 : ");
    scanf("%d", &c);
    printf("\nenter the value of y2 :");
    scanf("%d", &d);
    struct vector v1 = {a, b};
    struct vector v2 = {c, d};
    struct vector sum = {0};
    printf("\n\n");

    callsum(v1, v2, sum);

    return 0;
}
void callsum(struct vector v1, struct vector v2, struct vector sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x is %d\n", sum.x);
    printf("sum of y is %d\n", sum.y);
}