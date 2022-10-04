#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2D array of integers
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: The pointer to the array
 * Otherwise, 0.
 */
int **alloc_grid(int width, int height)
{
	int **array2D;
	int wid, hgt;

	if (height <= 0 || width <= 0)
		return (NULL);

	array2D = malloc(sizeof(int *) * height);

	if (array2D == NULL)
		return (NULL);

	for (hgt = 0; hgt < height; hgt++)
	{
		for (wid = 0; wid < width; wid++)
		{
			array2D[hgt][wid] = 0;
		}
	}

	return (array2D);
}
