#include "main.h"
#include <stdio.h>
#include "holberton.h"
/**
 * _puts_recursion - function print string
 *
 * @s: string we will print 
 *
 * Return: Success (0)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
