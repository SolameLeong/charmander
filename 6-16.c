#include <stdio.h>
int main()
{
    int START = 1000000;
    const float INTEREST = 0.08;
    int year = 0;
    float money = START;
    const int COST = 100000;
    while (COST < money)
    {
	money = money * (1 + INTEREST);
	money = money - COST;
	year ++;
    }

    printf("After %d years, the account will be empty.\n", year);
    return 0;
}

