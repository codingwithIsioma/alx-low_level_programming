#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to a new allocated memory containing
 * the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concated;
	int i, concat_len = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concated = malloc(sizeof(char) * len);

	if (concated == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concated[concat_len++] = s1[i];

	for (i = 0; s2[i]; i++)
		concated[concat_len++] = s2[i];

	return (concated);
}
