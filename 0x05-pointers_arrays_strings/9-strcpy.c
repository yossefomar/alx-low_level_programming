#include "main.h"
/**
 * _strcpy - check if it's digit or not
 *
 * @dest: integer to chech if from 0to 9 or not
 *
 * @src: sourcs
 *
 * Return: 1 -> alpha | 0 -> other wise
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
