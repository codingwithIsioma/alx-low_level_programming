#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes searched for
 * Return: A pointer to the byte in @s
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	/* loops through the @s string */
	while (*s != '\0')
	{
		/* loops through the set of bytes @accept*/
		for (i = 0; accept[i] != '\0'; i++)
		{
			/* checks if any of the chars match*/
			if (*s == accept[i])
			{
				/* returns that char */
				return (s);
			}
		}
		/* increments the @s (checks the next char)*/
		s++;
	}
	/* Leaves the loop if no chars match */
	return (NULL);
}
