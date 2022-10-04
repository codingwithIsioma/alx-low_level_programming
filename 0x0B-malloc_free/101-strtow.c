#include "main.h"
#include <stdlib.h>

int strword_len(char *str);
int count_word(char *str);
char **strtow(char *str);

/**
 * strword_len - Locates the end of the first word within
 *               a string
 * @str: The string searched
 *
 * Return: The index of the end of the initial word
 */
int strword_len(char *str)
{
	int i = 0, len = 0;

	while (str[i] && str[i] != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_word - Counts the num of words within the string
 * @str: The string searched
 *
 * Return: The number of words within @str
 */
int count_word(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			words++;
			i += strword_len(str + i);
		}
	}

	return (words);
}

/**
 * strtow - Spilts a string into words
 *
 * @str: The string to be spilt
 *
 * Return: A pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **splitstr;
	int i = 0, words, j, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_word(str);
	if (words == 0)
		return (NULL);

	splitstr = malloc(sizeof(char *) * (words + 1));

	if (splitstr == NULL)
		return (NULL);

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = strword_len(str + i);

		splitstr[j] = malloc(sizeof(char) * (letters + 1));

		if (splitstr[j] == NULL)
		{
			for (; j >= 0; j--)
				free(splitstr[j]);

			free(splitstr);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			splitstr[j][l] = str[i++];

		splitstr[j][l] = '\0';
	}
	splitstr[j] = NULL;

	return (splitstr);
}
