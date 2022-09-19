#include "main.h"

/**
 * _strcpy - copies the string to another buffer
 * @dest: the buffer to be copied to
 * @src: the source string
 *
 * Return: a pointer to the dest string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
