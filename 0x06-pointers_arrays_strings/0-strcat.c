#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be appended
 * Return: the value of dest
 */
char *_strcat(char *dest, char *src)
{
	/* initialize some variables */
	int length, i;

	/* store the length of dest in the variable length */
	length = 0;
	while (dest[length] != '\0')
		++length;

	/* concatenate src to dest */
	for (i = 0; src[i] != '\0'; ++i, ++length)
		dest[length] = src[i];

	/* terminating the dest string */
	dest[length] = '\0';

	return (dest);
}
