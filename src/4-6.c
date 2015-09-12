#include <stdio.h>
#include <float.h>
 int main()
{
   double A = 1.0/3.0;
   float  B = 1.0/3.0;
   printf("%2.4f, %2.12f, %2.16f.\n",A, A, A);
   printf("%2.4f, %2.12f, %2.16f.\n",A, A, A);
   printf("%d, %d.\n",FLT_DIG,DBL_DIG);
   return 0;
}

