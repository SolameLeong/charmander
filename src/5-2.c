#include <stdio.h>
  int main()
{
   int num, count;
   count = 0;
   printf("Please enter a number: ");
   
   scanf("%d", &num);
   printf("%d  ", num);
   while (++count < 11){
     printf("%d  ", num+count);
   }
   printf("\n");
   return 0;
}

