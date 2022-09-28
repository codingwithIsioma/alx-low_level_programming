#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be reversed.
 */
void _print_rev_recursion(char *s)
{
	/* if the string is not at the end*/
	if (*s != '\0')
	{
		/*
		 * move to the next char,
		 * stacks the char from the first to last
		 */
		_print_rev_recursion(s + 1);
		/*
		 * when it gets to the terminating null byte
		 * start printing from the top of the stack
		 * to the bottom (first char of the actual string)
		 */
		_putchar(*s);
	}
}
