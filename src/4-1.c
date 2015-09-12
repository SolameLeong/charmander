#include <stdio.h>
 int main()
{
  char fn[10];  char ln[10];
  printf("What's your first name?");
  scanf("%s",fn);
  printf("What's your family name?");
  scanf("%s",ln);
  printf("Hello, %s %s, nice to meet you!\n",fn,ln);
  return 0;
}

