#include "main.h"
#include <string.h>
/**
 * *cap_string - cap all words to string
 *
 * @str : initial string
 *
 * Return: the new string
 */
char *cap_string(char *str)
{
	int n, i;

	int cap;

	cap = 1;
	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (cap)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			cap = 0;
		}
		if (str[i] == '.' || str[i] == ',')
			cap = 1;
		if (str[i] == ';' || str[i] == '!')
			cap = 1;
		if (str[i] == '?' || str[i] == '(')
			cap = 1;
		if (str[i] == ')' || str[i] == '{')
			cap = 1;
		if (str[i] == '}' || str[i] == ' ')
			cap = 1;
		if (str[i] == '\n' || str[i] == '\t')
			cap = 1;
	}
	return (str);
}
