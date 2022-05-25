#include <stdio.h>
main()
{
    // char fastname[40];
    // printf("Enter your 1st name : ");
    // scanf("%s", fastname);
    // printf("%s", fastname);
    char fullname[4];
    fgets(fullname, 4, stdin);
    puts(fullname);
    return 0;
}
