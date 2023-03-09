#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number @n.
 *         If @n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	double x = n / 2.0;
	double y = 0;

	while (x != y)
	{
		y = x;
		x = (n / x + x) / 2;
	}

	if ((int) x * (int) x == n)
		return ((int) x);
	else
		return (-1);
}

