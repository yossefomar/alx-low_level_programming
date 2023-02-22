#include "main.h"
/**
 * print_last_digit - return last digit
 *
 * @r: integer value
 *
 * Return: the last digit of the integer
 */

int print_last_digit(int r)
{

	int remainder;

	remainder = n % 10;
	if (remainder < 0)
		remainder *= -1;
	_putchar(remainder + '0');
	return (remainder % 10);
}
