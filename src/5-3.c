#include <stdio.h>
 int main()
{
   printf("Please enter the days(enter 0 to quit): ");
   int day1, weeks, day2;
   scanf("%d", &day1);

   while(day1 > 0){
     weeks = day1 / 7;
     day2 = day1 % 7;
     printf("%d days are %d weeks, %d days.\n", day1, weeks, day2);
     printf("Please enter the days: ");
     scanf("%d", &day1);
   }
   return 0;
}

