#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 *
 * @separator: the string to be printed btw the strings
 * @n: The number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap_strings;

	va_start(ap_strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap_strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap_strings);
}
