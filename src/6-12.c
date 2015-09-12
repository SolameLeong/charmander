#include <stdio.h>
int main()
{
    int num[8], count_1, count_2;
    for (count_1 = 0; count_1 < 8; count_1++)
    {
	int number = 1;

	for (count_2 = 0; count_2 < count_1; count_2++)
	    number = number * 2;
	num[count_1] = number;
    }
    count_1 = 7;
    do
    {
	printf("%d  ", num[count_1]);
	count_1 --;
    }while(count_1 != 0);
    printf("\n");
    return 0;
}

	    
