#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - print the second half of str
 *
 * @str : ptr of str
 *
 * Return: Success(0)
 */
void puts_half(char *str)
{
	int len, odd, even, i;

	len = strlen(str);
	if (len % 2 == 0)
	{
		even = len / 2;
		for (i = even ; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}
	else
	{
		odd = (len - 1) / 2;
		for (i = odd ; i < len ; i++)
		{
			putchar(str[i]);
		}
		putchar('\n');
	}

}
