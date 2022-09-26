#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string which the initial segment will be gotten from
 * @accept: Consists of only some bytes
 * Return: The number of bytes in the initial segment of @s
 *        which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/* sets the initial length to 0*/
	int i, j, count = 0;

	/* loops through the @s string */
	for (i = 0; s[i] != 0; i++)
	{
		/* checks if there is a space inbtw the strings*/
		if (s[i] != 32)
		{
			/* loops through the @accept string*/
			for (j = 0; accept[j] != 0; j++)
			{
				if (s[i] != accept[j])
					continue;
				count++;
			}
		}
		else
			return (count);
	}
	return (count);
}
