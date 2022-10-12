#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to ve searched
 * @size: The number of elements in the array
 * @cmp: A pointer to the fxn to be used to compare values
 *
 * Return: index of the first element
 *         if no element matches, return -1
 *         if @size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
