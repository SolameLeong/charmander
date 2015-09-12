#include <stdio.h>
 int main()
{
   printf("请输入一个整数或小数： ");
   float x, cubic;
   scanf("%f", &x);
   cubic = x*x*x;
   printf("The cube of %f is %f.\n", x, cubic);
   return 0;
}

