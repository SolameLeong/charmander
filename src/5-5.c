#include <stdio.h>
 int main()
{
   int count, sum, num;
   printf("Enter a number: ");
   scanf("%d", &num);
   count = sum = 0;

   while(count++ < num){
     sum = sum + count;
   }
   printf("sum = %d \n", sum);
   return 0;
}

