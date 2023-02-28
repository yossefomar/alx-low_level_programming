#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 12
/**
 * main - that print gavin str by put
 *
 * Return: succsess(0)
 */


int main(void)
{
	char password[PASSWORD_LENGTH + 1] = {0};

	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		switch (rand() % 3)
		{
			case 0:
				password[i] = rand() % 10 + '0';
				break;
			case 1:
				password[i] = rand() % 26 + 'a';
				break;
			case 2:
				password[i] = rand() % 26 + 'A';
				break;
		}
	}
	printf("%s\n", password);
	return (0);
}
