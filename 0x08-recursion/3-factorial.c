#include "main.h"
/**
 * factorial - function print fact of num
 *
 * @n : number to find factorial of it
 *
 * Return: fatorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
