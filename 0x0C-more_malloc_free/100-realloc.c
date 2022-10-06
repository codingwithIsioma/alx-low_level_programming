#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 *
 * @ptr: A pointer to the prev allocated memory
 * @old_size: The size in bytes of the allocated space for @ptr
 * @new_size: The new size in bytes for the new memory block
 *
 * Return: A pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;
	char *old_array = ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		array = malloc(new_size);
		return (array);
	}

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	array = malloc(new_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		array[i] = old_array[i];

	free(old_array);
	return (array);
}
