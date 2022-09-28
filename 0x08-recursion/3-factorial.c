#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The given number
 * Return: -1 if @n is lower than 0
 * 	   1 if @n is 0
 * 	   The factorial of @n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
