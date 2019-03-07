#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees a 2-dimensional grid previously created by alloc_grid()
 * @grid: pointer to 2d grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
