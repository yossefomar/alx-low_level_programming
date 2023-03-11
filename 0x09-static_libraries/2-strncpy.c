#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - function concat with some conds.
 *
 * @dest: first str
 *
 * @src: second str
 *
 * @n: max number to be represented
 *
 * Return: dest-> str after concat
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
