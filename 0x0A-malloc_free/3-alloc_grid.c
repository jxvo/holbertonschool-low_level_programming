#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional int array
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		arr[y] = malloc(width * sizeof(int));
		if (arr[y] == NULL)
		{
			free(arr[y]);
		}
		for (x = 0; x < width; x++)
		{
			arr[y][x] = 0;
		}
	}
	return (arr);
}
