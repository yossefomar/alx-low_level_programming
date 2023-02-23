#include "main.h"
/**
 * more_numbers - print the alphabet 10 times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
