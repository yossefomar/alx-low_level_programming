#include "main.h"
/**
 * jack_bauer - print every minute of jack_bauer day
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24 ; hour++)
	{
		for (min = 0; min < 60 ; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}
}
