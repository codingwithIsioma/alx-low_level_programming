#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates password
 * Return: Always 0
 */
int main(void)
{
	char password;
	int i;

	srand(time(0));
	while (i <= 2645)
	{
		password = rand() % 128;
		i += password;
		putchar(password);
	}
	putchar(2772 - i);

	return (0);
}
