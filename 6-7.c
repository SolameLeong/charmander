#include <stdio.h>
int main()
{
    int status_1, status_2;
    float num_1, num_2;
    printf("Please enter 2 decimal number!(q to quit)\n"
           " The first number:");
    status_1 = scanf("%f", &num_1);
    if (status_1 == 1)
    {
	printf("The second number:");
	status_2 = scanf("%f", &num_2);
	if (status_2 == 1)
	{
 	    float product, quotient, difr;
	    difr = num_1 - num_2;
	    product = num_1 * num_2;
	    quotient = difr / product;
	    printf("The result is %f.\n", quotient);
	}
    }
    printf("Bye.\n");
    return 0;
}

