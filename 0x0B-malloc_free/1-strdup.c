#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * in memory, which contains a copy of the strinf given
 * as a parameter
 *
 * @str: The string to be copied
 *
 * Return: A pointer to the duplicate string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(sizeof(char) * *str);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}

	duplicate[i] = '\0';

	return (duplicate);
}
