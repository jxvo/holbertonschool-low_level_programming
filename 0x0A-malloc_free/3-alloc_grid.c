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

	if (height < 1 || width < 1)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		arr[y] = malloc(width * sizeof(int));
		if (arr[y] == NULL)
		{
			for (x = y; x > 0; x--)
			{
				free(arr[x]);
				free(arr);
				return (NULL);
			}
		}
		for (x = 0; x < width; x++)
		{
			arr[y][x] = 0;
		}
	}
	return (arr);
}
