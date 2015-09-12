#include <stdio.h>
int main()
#define START 100
{
    float Daphne = START, Deirdre = START;
    int year = 0;
    do
    {
	Daphne = Daphne + START * 0.1;
	Deirdre = Deirdre + Deirdre * 0.05;
	year ++;
    }while (Deirdre < Daphne);
    printf("After %d year, Deirdre have more money than Daphne.\n", year);
    printf("Daphne : $%.3f;  Deirdre : $%.3f;  \n", Deirdre, Daphne);
    return 0;
}

