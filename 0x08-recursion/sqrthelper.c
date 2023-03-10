/**
 * _sqrt_helper - Recursive helper function to find square root.
 * @n: The number to find the square root of.
 * @g: The guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
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




