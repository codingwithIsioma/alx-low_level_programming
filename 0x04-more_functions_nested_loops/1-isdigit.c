#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The digit to be checked
 * Return: Either 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
