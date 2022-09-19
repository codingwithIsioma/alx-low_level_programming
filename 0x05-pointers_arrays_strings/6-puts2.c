#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character.
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
