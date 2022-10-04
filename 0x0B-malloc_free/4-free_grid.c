#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by your
 *             alloc_grid function
 * @grid: The prev created function
 * @height: The height of the array
 */
void free_grid(int **grid, int height)
{
	int hgt;

	for (hgt = 0; hgt < height; hgt++)
	{
		free(grid[hgt]);
	}
	free(grid);
}
