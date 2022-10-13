#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters entered
 *
 * Return: The sum of @n
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap_sum;

	va_start(ap_sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap_sum, unsigned int);
	}

	va_end(ap_sum);

	return (sum);
}
