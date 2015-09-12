#include <stdio.h>
int main()
{
    const char STOP = '#';
    int count = 0;
    char ch;

    printf("Please enter a passage(# to teminate): ");
    while ((ch = getchar()) != STOP)
    {
	count ++;
	printf("%c", ch);
	printf(":%-7d", ch);
	if (count % 8 == 0)
	    printf("\n");
    }
    printf("\n");
    return 0;
}

