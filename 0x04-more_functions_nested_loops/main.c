#include "main.h"
#include "7-print_diagonal.c"
#include <stdio.h>
#include "8-print_square.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
void _putchar(char c)
{
	printf("%c", c);
}
