#include <stdio.h>
 int main()
{
  const double NUM1 = 21.30;
  const double NUM2 = 21.290;
  printf("a. The input is %2.1f or %1.1e.\n",NUM1,NUM1);
  printf("b. The input is %+2.3f or %1.3E.\n",NUM2,NUM2);
  return 0;
}

