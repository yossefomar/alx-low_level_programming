#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @n: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j < n - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
