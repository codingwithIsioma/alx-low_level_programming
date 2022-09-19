#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to the checked
 * Return: the value of length
 */
int _strlen(char *s)
{
	int length;

	while (*s++)
		length++;

	return (length);
}
