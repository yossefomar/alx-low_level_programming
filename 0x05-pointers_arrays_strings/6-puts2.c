#include "main.h"
#include <stdio.h>
/**
 * puts2 - print char and remove char of str
 *
 * @str: string input
 *
 * Return: Success(0)
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}
