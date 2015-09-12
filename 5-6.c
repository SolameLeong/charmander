//计算整数平方的和
#include <stdio.h>
 int main()
{
   printf("Please enter a number: ");
   int n, sum, count;
   scanf("%d", &n);
   sum = 0; count = 0;

   while(count++ < n){
     sum = count*count+sum;
    }
   printf("sum = %d\n.", sum);
   return 0;
}

