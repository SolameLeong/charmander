#include <stdio.h>
int main()
{
    const char SPACE = ' ';
    const char STOP = '#';
    const char NL = '\n';
    int count_space = 0, count_nl =0,  count_ch = 0;
    printf("Please enter the passage to account(enter # to finish):\n");
    char ch;
    char prev;

    while ((ch = getchar()) != STOP)
    {
	if (ch == SPACE)
	    count_space ++;
	else if (ch == NL)
	    count_nl ++;
	else
	    count_ch ++;
	prev = ch;
    }

    if (prev != NL)
	count_nl ++;
    printf("There are %d characters, %d space and %d lines in this passage.\n", count_ch, count_space, count_nl);
    return 0;
}

