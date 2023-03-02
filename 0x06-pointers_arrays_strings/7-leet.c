#include "main.h"
#include <string.h>
/**
 * *leet - encode a string
 *
 * @str : the string
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int n, i;

	n = strlen(str);
	for (i = 0 ; i < n; i++)
	{
		char *s = "OL/EA//T";

		int j;

		for (j = 0 ; j < 8; j++)
			if (s[j] == str[i] || s[j] == (s[i] + 32))
				str[i] = j;
	}
	return (str);
}
