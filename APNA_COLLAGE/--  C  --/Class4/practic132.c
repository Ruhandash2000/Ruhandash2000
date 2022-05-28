// make a stucture to store Bank Account information of a customer of ABC Bank.Also, makke alias for it.
#include <stdio.h>
#include <string.h>
typedef struct account
{
    int accno;
    char name[30];
    float balance;
} account;
int main()
{
    /* struct account acc;
     acc.accno = 12345;
     strcpy(acc.name, "Ruhan");
     acc.balance = 3000;
     printf("account no is : %d\n", acc.accno);
     printf("customer name is : %s\n", acc.name);
     printf("balance is : %f\n", acc.balance);
     return 0;*/
    account acc;
    acc.accno = 12345;
    strcpy(acc.name, "Ruhan");
    acc.balance = 3000;
    printf("account no is : %d\n", acc.accno);
    printf("customer name is : %s\n", acc.name);
    printf("balance is : %f\n", acc.balance);
    return 0;
}