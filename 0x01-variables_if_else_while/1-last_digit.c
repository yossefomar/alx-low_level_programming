#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main function -starter function
 * find the last digit and segment it if 0 or not
 * Return: (0) succsess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0 \n", n, lastDigit);
	}
	else if (lastDigit != 0 && lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n"
				, n, lastDigit);
	}
	return (0);
}
