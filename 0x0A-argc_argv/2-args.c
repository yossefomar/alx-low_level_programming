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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
