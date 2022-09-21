#include "main.h"

/**
 * string_toupper - changes all lowercases letters to uppercase
 * @s: the string to be changed
 * Return: the changed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		i++;
	}
	return (s);
}
