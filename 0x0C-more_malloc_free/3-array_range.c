#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: The smallest integer of the array
 * @max: The largest integer of the array
 *
 * Return: A pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}

	return (array);
}
