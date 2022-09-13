#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the digit entered
 *
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int lastNum = i % 10;

	if (lastNum < 0)
		lastNum *= -1;
	_putchar(lastNum + '0');
	return (lastNum);
}
