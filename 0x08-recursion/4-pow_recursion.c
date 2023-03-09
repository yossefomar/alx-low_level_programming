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
	int ans;

	ans = x;

	if (y > 1)
	{
		ans = ans * x;
		y--;
	}
	return (ans);
}
