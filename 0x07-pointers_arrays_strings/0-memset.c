#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: the memory area
 * @b: the constant byte
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* sets i to be less than the number of spaces to be filled*/
	for (i = 0; i < n; i++)
	{
		/* sets each of the char array (stringchar) to the value of b*/
		*(s + i) = b;
	}
	return (s);
}
