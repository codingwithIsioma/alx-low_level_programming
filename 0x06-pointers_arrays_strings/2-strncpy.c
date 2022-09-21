#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination of the string
 * @src: the string to be copied
 * @n: the number of chars to be copied
 * Return: the value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length, i = 0;

	/* store the len of src in the length var */
	length = 0;
	while (src[i++])
		++length;

	/* copy src to dest */
	for (i = 0; src[i] && i < n; ++i)
		dest[i] = src[i];

	/* terminating the dest string */
	for (i = length; i < n; ++i)
		dest[i] = '\0';

	return (dest);
}
