#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: The size in bytes to be allocated
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
