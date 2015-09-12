#include <stdio.h>
 int main()
{
   printf("Enter a height in centimeters: ");
   float cm, inch;
   int feet; //feet 是英尺
   scanf("%f", &cm);

   while(cm > 0){
     feet = cm / 30.48;
     inch = cm / 2.54;
     printf("%.1f cm = %d feet, %.1f inches.\n", cm, feet, inch);
     printf("Enter a height in centimeters(<=0 to quit): ");
     scanf("%f", &cm);
     }
   printf("bye\n");
   return 0;
}

