#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination memory area
 * @src: the memory area to be copied from
 * @n: the number of bytes to be copied
 * Return: a point to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* loops through the src char */
	for (i = 0; i < n; i++)
		/*equates the src char to the new dest char*/
		dest[i] = src[i];

	return (dest);
}
