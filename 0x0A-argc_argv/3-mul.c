#include <stdio.h>
#include <stdlib.h>
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
	if (argc < 3)
		printf("Error\n");
	else
	{
		int num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	return (0);
}
