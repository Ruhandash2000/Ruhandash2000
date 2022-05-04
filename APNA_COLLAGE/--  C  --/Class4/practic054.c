#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  //%u unsigned decimal number

  printf("address of var: %u\n",&var);

  //%d signed decimal number
  printf("address of var: %p\n", &var);
  // %o unsigned octal
  

  printf("address of var: %o\n", &var);
  return 0;

}
