#include <stdio.h>
 int main()
{
   float miles, galon;
   printf("Let's caculate how far can your car go with 1 galon oil.\n");
   printf("Please enter the miles you have drove.");
   scanf("%f", &miles);
   printf("Now tell me the galon you have used.");
   scanf("%f", &galon);
   float perA = miles/galon;
   printf("You can drive %.2f miles with 1 galon oil!",perA);

   float L, km;
   L = 1/3.758*galon;
   km = 1/1.609*miles;
   float perB = L/100*km;
   printf(" Or you can drive 100 km with %.1f L oil!\n",perB);
   return 0;
}

