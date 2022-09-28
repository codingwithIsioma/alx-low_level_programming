#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	/*base case*/
	if (*s != '\0')
	{
		/*prints the first string (and after the next iteration)*/
		_putchar(*s);
		/*iterates to the next char string*/
		(_puts_recursion(s + 1));
	}
}
