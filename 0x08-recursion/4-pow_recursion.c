#include "main.h"
/**
 * _pow_recursion - function return answer of y power x
 *
 * @x: base number
 *
 * @y: power number
 *
 * Return: answer of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
