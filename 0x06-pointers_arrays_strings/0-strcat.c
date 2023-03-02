#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function concat 2 strings
 *
 * @dest: first str
 *
 * @src: second str
 *
 * Return: dest -> string after concat
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
