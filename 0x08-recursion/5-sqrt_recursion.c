#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    return _sqrt_helper(n, n/2);
}

/**
 * _sqrt_helper - recursive helper function to find square root
 * @n: the number to find the square root of
 * @g: the guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int g)
{
    if (g*g == n)
        return g;
    else if (g*g < n)
        return _sqrt_helper(n, (g + n/g)/2);
    else
        return -1;
}

