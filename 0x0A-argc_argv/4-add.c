#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	if (argc < 2)
		printf("0\n");
	else
	{
		int i, sum;

		sum = 0;
		for (i = 1; i < argc; i++)
		{
			int j, z, num;

			z = 1;
			num = strlen(argv[i]);
			for (j = 0; j < num; j++)
			{
				if (argv[i][j] <= '0' || argv[i][j] >= '9')
					z = 0;
			}
			if (z == 0)
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[i]);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);

}
