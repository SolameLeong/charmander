#include <stdio.h>
int main()
#define END "."
{
    char ch[255];
    int count, count_2;
    printf("Please enter a sentence: ");
    do
    {
	scanf("%c", &ch[count]);
	count ++;
    }while (count < 255 || ch != END);

    for (count_2 = 0; count_2 < count; count_2 ++)
	printf("%c", ch[count - count_2]);
    printf("\n");
    return 0;
}
