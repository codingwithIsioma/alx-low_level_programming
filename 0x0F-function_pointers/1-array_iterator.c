#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of the array
 *
 * @array: The array
 * @size: The size of the array
 * @action: A pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
