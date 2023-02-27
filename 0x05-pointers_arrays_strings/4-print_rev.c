#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print reverse str by puts
 *
 * @s: str which we will print
 *
 * Return: Success(0)
 *
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len - 1 ; i >= 0 ; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

