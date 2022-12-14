#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 *
 * @separator: is the string to be printed btw numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap_print;

	va_start(ap_print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap_print, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
