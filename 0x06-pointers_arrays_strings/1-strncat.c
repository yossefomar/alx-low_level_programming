#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - function concat with some conds.
 *
 * @dest: first str
 *
 * @src: second str
 *
 * @n: max number to be represented
 *
 * Return: dest-> str after concat
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
