#include "main.h"
#include <stdio.h>
/**
 * print_array - check if it's digit or not
 *
 * @a: integer to chech if from 0to 9 or not
 *
 * @n: length
 *
 * Return: Success (0)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
