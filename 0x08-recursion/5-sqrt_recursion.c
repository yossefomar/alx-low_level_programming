#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return -1;
    }
    else if (n == 0 || n == 1) {
        return n;
    }
    else {
        int i;
        for (i = 1; i * i < n; i++);
        if (i * i == n) {
            return i;
        }
        else {
            return -1;
        }
    }
}

