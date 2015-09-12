#include <stdio.h>
int main()
{
    printf("enter lower and upper interger limits:");
    int low, up;
    scanf("%d %d", &low, &up);
    while (low < up)
    {
	int count;
	int sum = low * low;
	for (count = low + 1; count <= up; count ++)
	{
	    sum = sum + count * count;
	}
	printf("The sums of the squares from %d to %d is %d\n",
	       low * low, up * up, sum);
	printf("enter lower and upper interger limits:");
  	scanf("%d %d", &low, &up);
    }
    printf("Done\n");
    return 0;
}

	
	

