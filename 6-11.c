#include <stdio.h>
int main()
{
    int set, status;
    printf("Enter a number(q to quit): ");
    status = scanf("%d", &set);
    while (status != 1)
    {
	input();
	while
	int count;
	float sum = 0;
	for (count = 0; count < set; count++)
	{
	    float num = 1.0 / (count + 1.0);
	    sum = sum + num;
	}
	printf("The sum of 1 to 1/%d is %f.\n", set, sum);
	printf("Enter a number(q to quit): ");
	status = scanf("%d", &set);
    }
    return 0;
}

int input()
{
    
