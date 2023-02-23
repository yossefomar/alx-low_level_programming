#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all numbers till 98
 *
 * @n: the start integere
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", 98);
}

