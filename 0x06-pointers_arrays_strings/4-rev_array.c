#include "main.h"
/**
 * reverse_array - reverse the array
 *
 * @a: the array
 *
 * @n: it's size
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		int temp;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
