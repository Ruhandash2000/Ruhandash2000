// enter address (house no , block, city, state) of 5 people.
#include <stdio.h>
struct adress
{
    int house_no;
    char block[10];
    char city[100];
    char state[10];
};
void printinfo(struct adress add);

int main()
{
    struct adress addr[5];
    printf("enter info for person 1 .\n");
    scanf("%d", &addr[0].house_no);
    scanf("%s", &addr[0].block);
    scanf("%s", addr[0].city);
    scanf("%s", addr[0].state);
    printf("enter info for person 2 .\n");
    scanf("%d", &addr[1].house_no);
    scanf("%s", &addr[1].block);
    scanf("%s", addr[1].city);
    scanf("%s", addr[1].state);
    printf("enter info for person 3 .\n");
    scanf("%d", &addr[2].house_no);
    scanf("%s", &addr[2].block);
    scanf("%s", addr[2].city);
    scanf("%s", addr[2].state);
    printf("enter info for person 4 .\n");
    scanf("%d", &addr[3].house_no);
    scanf("%s", &addr[3].block);
    scanf("%s", addr[3].city);
    scanf("%s", addr[3].state);
    printf("enter info for person 5 .\n");
    scanf("%d", &addr[4].house_no);
    scanf("%s", &addr[4].block);
    scanf("%s", addr[4].city);
    scanf("%s", addr[4].state);
    printf("\n\n");

    printinfo(addr[0]);
    printinfo(addr[1]);
    printinfo(addr[2]);
    printinfo(addr[3]);
    printinfo(addr[4]);

    return 0;
}
void printinfo(struct adress add)
{
    printf("house no : %d\n", add.house_no);
    printf("block : %s\n", add.block);
    printf("city : %s\n", add.city);
    printf("state : %s\n", add.state);
}
