#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit =n%10;
	if(lastDigit>5)
	{
	printf("Last digit of %d",n,"is %d",lastDigit,"and is greater than 5" );
	}
	else if(lastDigit=0)
	{
	printf("Last digit of %d",n,"is %d",lastDigit,"and is 0");
	}
	else if(lastDigit!=0 && lastDigit <6)
	{
	printf("Last digit of %d",n,"is %d",lastDigit,"and is less than 6 and not 0");
	}
	return (0);
}
