#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, mult, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
