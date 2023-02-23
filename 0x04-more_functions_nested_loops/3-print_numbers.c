#include "main.h"
/**
 * print_numbers - check if it's alpha or not
 *
 *
 * Return: 0 always success
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
