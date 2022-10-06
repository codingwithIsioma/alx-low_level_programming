#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 *
 * @nmemb: An array of elements
 * @size: The size of the bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;

	return (memory);
}
