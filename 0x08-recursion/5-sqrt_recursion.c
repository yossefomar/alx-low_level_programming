#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return n;
    else
        return _sqrt_helper(n, 0, n);
}

/**
 * _sqrt_helper - recursive helper function to find square root
 * @n: the number to find the square root of
 * @start: the starting point of the binary search
 * @end: the ending point of the binary search
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int start, int end)
{
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (mid * mid == n)
        return mid;
    else if (mid * mid > n)
        return _sqrt_helper(n, start, mid - 1);
    else
        return _sqrt_helper(n, mid + 1, end);
}

