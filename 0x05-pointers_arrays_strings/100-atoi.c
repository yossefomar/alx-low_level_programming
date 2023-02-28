#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - that print gavin str by put
 *
 * @s: gavin str
 *
 * Return: num -> number in s
 */
int _atoi(char *s)
{
	int num;

	while (*s < '0' || *s > '9')
	{
		s++;
	}
	num = atoi(s);
	return (num);
}
