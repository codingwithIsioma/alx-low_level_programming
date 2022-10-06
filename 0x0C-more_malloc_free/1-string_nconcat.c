#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The first bytes of @s2 to be taken
 *
 * Return: A pointer to the new created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concated;
	/* initialize the len of the string to @n */
	unsigned int i, concat_len = 0, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* adds the len of @s1 to @n to give the entire len of new str*/
	for (i = 0; s1[i]; i++)
		len++;

	/* Allocates memory for the new str + 1 for the terminating null*/
	concated = malloc(sizeof(char) * (len + 1));

	if (concated == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concated[concat_len++] = s1[i];

	/* loops through @s2 @n times */
	for (i = 0; s2[i] && i < n; i++)
		concated[concat_len++] = s2[i];

	concated[concat_len] = '\0';

	return (concated);
}
