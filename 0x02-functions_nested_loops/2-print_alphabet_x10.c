#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *                      followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i++ <= 9)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
