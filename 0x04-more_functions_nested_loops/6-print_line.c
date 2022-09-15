#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: length of the line
 */
void print_line(int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
