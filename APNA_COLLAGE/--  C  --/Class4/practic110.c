#include <stdio.h>
int countlangth(char arr[]);
int main()
{

    char name[100];
    printf("ENter tour name : ");
    fgets(name, 100, stdin);
    puts(name);
    printf("%d", countlangth(name));
    return 0;
}
int countlangth(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}