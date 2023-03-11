#include "main.h"


/**
 * _isupper - check the case of letter.
 *
 * @c: the ASCII code of the char
 *
 * Return: 1if Uppercase ,0 else.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
