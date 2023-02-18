#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = 0; j <= 8; ++j)
	{
		for (i = j + 1; i <= 9; ++i)
		{
			putchar('0' + j);
			putchar('0' + i);
			if (i < 9 || j < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
