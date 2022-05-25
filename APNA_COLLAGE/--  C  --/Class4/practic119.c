write a function to count the occurence of vowles in a string.
#include <stdio.h>
    int
    countvowls(char str[]);
int main()
{
    char str[] = "HelloWorld";
    printf("the vowls  are : %d", countvowls(str));

    return 0;
}

int countvowls(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    return count;
}
