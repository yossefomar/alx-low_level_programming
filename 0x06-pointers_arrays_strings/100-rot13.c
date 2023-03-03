#include "main.h"
#include <string.h>
/**
 * *rot13 - encode a string
 *
 * @s : the string
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;

	int i;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{
			*ptr -= 13;
		}
		ptr++;
	}
	return (s);
}
}
