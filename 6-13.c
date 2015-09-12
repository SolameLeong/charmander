#include <stdio.h>
int main()
{
    double num[8], sum[8], sum_;
    int count, count_2;
    for (count = 0; count < 8; count ++)
    {
	scanf("%f", &num[count]);
	sum = 0;
	for (count_2 = 0; count_2 < count; count_2 ++)
	{
	    sum = sum + num[count_2];
	}
	printf("%5f", num[count])
    }
    printf("\n");
    for (count = 0; count < 8; count ++)
	printf("%f", sum[count]);
    printf("\n");
    return 0;
}

