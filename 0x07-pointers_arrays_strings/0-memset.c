#include "main.h"
#include <string.h>
/**
 * _memset - fill memory firtst n bytes by s pointed by p
 *
 * @b: the constant will filled 
 *
 * @s: pointer of b
 *
 * @m: number of bits will be used
 */
char* memset(char* s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

