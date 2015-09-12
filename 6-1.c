#include <stdio.h>
 int main()
{
   char debts[26];
   int sum;
   for(sum = 0, debts[sum] = ('a' + sum); sum < 26; sum++)
     printf("%c ", debts[sum]);
   return 0;
}

