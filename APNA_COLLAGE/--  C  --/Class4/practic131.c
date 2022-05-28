// creat a structute to store complex number. use arrow operator to access the members of the structure.
#include <stdio.h>
struct complex
{
    int real;
    int img;
};
int main()
{
    struct complex c1 = {1, 2};
    struct complex *ptr = &c1;
    printf("real %d\n", ptr->real);
    printf("img %d\n", ptr->img);
}