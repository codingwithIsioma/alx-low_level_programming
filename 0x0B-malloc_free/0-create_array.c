#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes
 *                it with a specific char
 * @size: The size of the array
 * @c: The specific char the array is initialized with
 *
 * Return: A pointer to the array
 *         or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	/* A pointer that points to the array created */
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	/* Allocate the memory space for the array to the pointer*/
	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		/* initializes the first char to @c */
		array[i] = c;
	}

	if (array == NULL)
		return (NULL);

	return (array);
}
