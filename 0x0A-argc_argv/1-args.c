#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - starter function
 *
 * @argc: not used arg
 *
 * @argv: array of arugments
 *
 * Return: 0 - succsess
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
