#include <stdio.h>
int main()
{
    printf("Please enter intergars(0 to terminate):");
    int n1 = 0, n2 = 0;
    int input;
    int odd[n1], even[n2];

    scanf("%d", &input);
    while (input != 0)
    {
	if (input % 2 == 0)
	{
	    odd[n1] = input;
	    n1 ++;
	}
	else
	{
	    even[n2] = input;
	    n2 ++;
	}
    }

    int sum_1 = 0, sum_2 = 0,  count;
    float everage_1;
    for (count = 0; count < n1; count++)
    {
	sum_1 = sum_1 + odd[n1];
	everage_1 = sum_1 / n1;
    {
    printf("There %s %d odd number and the everage is %f.", n1 == 1? "is":"are", n1, everage_1);

    for (count = 0; count < n2; count++)
	sum_2 = sum_2 + even[n2];
    printf("There %s %d even number and everage is %f.\n", n2 == 1? "is":"are", n2, sum_2 / n2);

    return 0;
}

