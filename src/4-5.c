#include <stdio.h>
#include <string.h>
int main()
{
  printf("Please tell me your first name.\n");
  scanf("%s",fn);
  printf("Then tell me your family name.\n")
  scanf("%s",ln);
  printf("%s %s\n",fn,ln);
  int blank1,blank2;
  blank1 = strlen(fn) - 1;
  blank2 = strlen(ln) - 1;
  printf("%d 
