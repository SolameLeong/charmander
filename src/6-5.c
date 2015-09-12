#include <stdio.h>
int main()
{
    int status, num_1, num_2;
    printf("Please enter the first number(q to quit):");
    status = scanf("%d", &num_1);

    while (status == 1)
    {
	printf("Please enter the last number:");
	scanf("%d", &num_2);

	int num;
	printf("number     square     cubic\n");
	for (num = num_1; num <= num_2; num ++)
        {
   	    int num_s = num * num;
	    int num_c = num * num * num;
	    printf("%-11d%-11d%d\n", num, num_s, num_c);
	}
    printf("Please enter the first number(q to quit):");
    status = scanf("%d", &num_1);
    }
    printf("Bye\n");
    return 0;
}

    
