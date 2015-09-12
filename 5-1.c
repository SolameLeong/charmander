#include <stdio.h>
 int main()
{
   int min, hour, mins;
   const int M_PER_H = 60;
   printf("Welcom to use time caculator!\n"
          "You can tell me the minutes and I will turn it into hours.\n"
          "If you want to quit, just enter 0 or a minus.\n");
   printf("Please enter the minutes: ");
   scanf("%d", &min);

   while (min > 0){
     hour = min / M_PER_H;
     mins = min % M_PER_H;
     printf("%d minutes are equal to %d hours and %d minutes.\n",min,hour,mins);
     printf("Now tell me the next minutes~\n");
     scanf("%d", &min);
    }
   return 0;
}

