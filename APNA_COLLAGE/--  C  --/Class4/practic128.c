// enter address (house no , block, city, state) of 5 people.
#include <stdio.h>
struct address
{
    int house_no;
    char block[10];
    char city[10];
    char state[10];
} addr[5];
int main(int argc, char const *argv[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("enter address (house no , block, city, state) of 5 people.\n");
        printf("enter house no : ");
        scanf("%d", &addr[i].house_no);
        printf("enter block : ");
        scanf("%s", addr[i].block);
        printf("enter city : ");
        scanf("%s", addr[i].city);
        printf("enter state : ");
        scanf("%s", addr[i].state);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n\n");
        printf("house no : %d\n", addr[i].house_no);
        printf("block : %s\n", addr[i].block);
        printf("city : %s\n", addr[i].city);
        printf("state : %s\n", addr[i].state);
    }
    return 0;
}
