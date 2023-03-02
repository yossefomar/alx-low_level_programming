#include "main.h"
/**
 * string_toupper - convert lowercase to uppercase
 *
 * @s: string will be converterd
 *
 * Return: ans -> converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s)
}
