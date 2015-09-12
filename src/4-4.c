#include <stdio.h>
 int main()
{
  char name[10];  float height;  float tall;

  printf("Hey, what's your name? ");
  scanf("%s",name);
  printf("And tell me your height please. ");
  scanf("%f",&height);
  tall=height/100;
  printf("%s, you are %1.3f meter tall.\n",name,tall);
  return 0;
}

