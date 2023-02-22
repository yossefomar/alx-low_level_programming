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
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n');
		}
	}
}
