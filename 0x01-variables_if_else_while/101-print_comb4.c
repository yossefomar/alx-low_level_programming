#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (j = 0; j <= 7; ++j)
	{
		for (i = j + 1; i <= 8; ++i)
		{
			for (k = i + 1; k <= 9; ++k)
			{
				putchar('0' + j);
				putchar('0' + i);
				putchar('0' + k);
				if (j < 7 || i < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
