#include <stdio.h>
 int main()
 void Temperatures(int, int);

{
   printf("请输入一个华氏温度： ");
   float F_tem;
   scanf("%e", &F_tem);
   int status;

   while(status == 1);
     Temperatures();
     printf("华氏温度：%e，摄氏温度：%e，绝对温度：%e。\n", F_tem, C_tem, K_tem);
     printf("请输入一个华氏温度： ");
     scanf("%e", &F_tem);
    }
   printf("程序结束。\n");
   return 0;
}

 void Temperatures(float F_tem)
{
   double F_tem, C_tem, K_tem;
   const double A = 1.8;
   const double B = 32.0;
   const double C = 273.16;
   C_tem = A * F_tem + B;
   K_tem = C_tem + C;
}

