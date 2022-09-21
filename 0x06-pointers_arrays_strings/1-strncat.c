#include "main.h"

/**
 * _strncat - concatenates two strings that uses at
 * most n bytes from src
 * @dest: the destination of the string
 * @src: the string to be appended
 * @n: the number of bytes to be appended
 * Return: the value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	/* store the length of dest in the length var */
	length = 0;
	while (dest[length] != '\0')
		++length;

	/* concatenate src to dest */
	for (i = 0; src[i] && i < n; ++i, ++length)
		dest[length] = src[i];

	/* terminate the dest string */
	dest[length] = '\0';

	return (dest);
}
