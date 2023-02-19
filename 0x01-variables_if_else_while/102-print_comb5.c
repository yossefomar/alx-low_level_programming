#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, first, second, third, fourth;

	for (i = 0; i < 100; i++)
	{
		first = i / 10;
		second = i % 10;
		for (j = i + 1; j < 100; j++)
		{
			third = j / 10;
			fourth = j % 10;
			putchar(first + '0');
			putchar(second + '0');
			putchar(' ');
			putchar(third + '0');
			putchar(fourth + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

