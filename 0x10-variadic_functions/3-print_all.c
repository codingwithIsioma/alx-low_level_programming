#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	int flag;
	va_list print_list;

	va_start(print_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(print_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(print_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(print_list, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		/* Before i increments */
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	va_end(print_list);
	printf("\n");
}
