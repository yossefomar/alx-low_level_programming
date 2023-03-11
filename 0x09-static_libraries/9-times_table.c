#include "main.h"
/**
 * times_table - print the time table of all numbers till 9
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int result;

			result = i * j;
			if (result < 10)
			{
				if (j)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + result);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			if (j == 9)
			{
				_putchar('\n');
			}
			else
				_putchar(',');
		}
	}
}
