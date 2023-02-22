#include "main.h"
/**
 * _islower - check it's a lower case char or not
 *
 * @c: is a parameter that contains the ASCII code of the char
 * Return: 0 -> lower case | 1 -> otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
