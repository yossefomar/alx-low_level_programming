#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sqrt_n;

	if (n < 0)
		return -1;
	sqrt_n = sqrt(n);
	if (sqrt_n * sqrt_n == n)
		return sqrt_n;
	else
		return -1;
}

