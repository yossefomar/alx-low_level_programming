#include "main.h"
#include <ctype.h>
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
	char *result = malloc(strlen(str) + 1);

	int i = 0;


	while (str[i] != '\0')
	{
		result[i] = toupper(str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
