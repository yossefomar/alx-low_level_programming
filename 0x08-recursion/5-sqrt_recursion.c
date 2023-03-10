#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	else
		return _sqrt_helper(n, n/2);
}
