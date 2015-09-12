#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    char word[count]; 
    printf("Please enter a word:");
    scanf("%s", word);
    count = strlen(word);
    
    int num;
    for (num = 0; num < count; num++)
    {
	printf("%c", word[count - num - 1]);
    }
    printf("\n");
    return 0;
}
