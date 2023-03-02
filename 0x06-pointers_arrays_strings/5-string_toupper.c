#include "main.h"
#include <string.h>
/**
 * *string_toupper - change all lower case to upper case
 *
 * @str: current string
 *
 * Return: The new string
 */
char *string_toupper(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
