#include "main.h"
/**
 * _isdigit - check if it's digit or not
 *
 * @c: integer to chech if from 0to 9 or not
 *
 * Return: 1 -> alpha | 0 -> other wise
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
