#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: matrix to free
 * @height: height of the matrix
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

void free_grid(int **grid, int height)
{
	if (height < 0)
		return;

	while (height--)
		if (grid[height])
		{
			free(grid[height]);
			grid[height] = NULL;
		}

	free(grid);
	grid = NULL;
}
