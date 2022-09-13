#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 *
 * @c: The character to be checked
 *
 * Return: Either 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
