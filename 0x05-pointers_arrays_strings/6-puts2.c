#include "main.h"
#include <stdio.h>
#include <string.h>
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

	int len = strlen(str);

	for (i = 0 ; i < len ; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
