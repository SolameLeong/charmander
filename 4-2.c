#include <stdio.h>
 int main()
{
  char name[10];

  printf("Oh...You waked me up...Who are you?\n");
  scanf("%s",name);
  printf("\"%s\"? A fanfastic name!",name);
  printf("You will become my master!\n");
  printf("\"%20s\"\n",name);
  printf("\"%-20s\"\n",name);
  printf("%9s\n",name);
  return 0;
}

