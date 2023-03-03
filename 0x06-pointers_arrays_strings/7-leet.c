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
	char *ptr = str;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (*ptr == letters[i])
			{
				*ptr = numbers[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
