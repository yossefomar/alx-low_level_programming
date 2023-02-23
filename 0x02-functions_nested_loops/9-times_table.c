#include "main.h"
/**
 * times_table - print the time table of all numbers till 9
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i, result, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf("%d", result);
			}
			if (j < 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
