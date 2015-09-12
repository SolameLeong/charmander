#include <stdio.h>
int main()
{
    int num[8], count;
    printf("Please enter 8 intergers:");
    for (count = 0; count < 8; count ++)
    scanf("%d", &num[count]);

    for (count = 0; count < 8; count ++)
    {
	int order = 7 - count;
	printf("%d  ", num[order]);
    }
    printf("\n");
    return 0;
}

