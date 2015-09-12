#include <stdio.h>
int main()
{
    char ch;
    printf("Please enter a letter:");
    scanf("%c", &ch);
    int num = ch - 'A' + 1;
    
    int row = num;
    int count = 1, count_space, count_ch;
    while (count < row + 1)
    {
	for (count_space = 0; count_space < num - count; count_space++)
	printf(" ");
	
	for (count_ch = 0; count_ch < count; count_ch ++)
	{
	    char ch_1 = 'A' + count_ch;
	    printf("%c", ch_1);
	}
	for (count_ch = 0; count_ch < count - 1; count_ch ++)
	{
	    char ch_2 = 'A' + count - count_ch - 2;
	    printf("%c", ch_2);
	}
	printf("\n");
	count ++;
    }
    return 0;
}

