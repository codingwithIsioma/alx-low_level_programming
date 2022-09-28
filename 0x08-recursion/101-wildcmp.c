#include "main.h"

/**
 * wildcmp - Compares two strings if they are considered
 *           identical or not
 * @s1: First string to be compared
 * @s2: Second string to be considered
 *
 * Return: If the strings are identical - 1
 *         Otherwise, 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
			return (0);

		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	return (0);
}
