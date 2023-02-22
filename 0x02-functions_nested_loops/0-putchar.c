#include "main.h"
/**
 * main - Entry point
 *print call put char function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
