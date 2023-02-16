#include <unistd.h>
#include <string.h>
/**
 * main - starter function
 * Description: 'print error message'
 * Return: (1) Error
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\"", 32);
	write(STDERR_FILENO, " - Dora Korpar, 2015-10-19\n", 27);
	return (1);
}
