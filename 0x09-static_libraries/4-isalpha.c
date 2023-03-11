#include "main.h"
/**
 * _isalpha - check if it's alpha or not
 *
 * @c: the ASCII code of the char
 *
 * Return: 1 -> alpha | 0 -> other wise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
