#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i == 9 && j == 9)
			{
				putchar('\n');
			}
			else if (i == j)
			{
				continue;
			}
			else if (i < 9 || j < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
