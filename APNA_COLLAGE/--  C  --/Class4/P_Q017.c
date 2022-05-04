#include<stdio.h>
main()
{
    int n;
    do {
        printf("enter number :");
        scanf("%d",&n);
        printf("%d\n",n);

        if (n % 2 != 0)
        {
            break;
        }
        

    } while (1);
     printf("THANK you");
    return 0;

}