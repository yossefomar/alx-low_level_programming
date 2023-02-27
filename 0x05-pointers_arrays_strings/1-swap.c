#include "main.h"
/**
 * swap_int - swap two addresses values
 *
 * @a: first pointer
 *
 * @b: second pointer
 *
 * Return: succsess(0)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
