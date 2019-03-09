#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array from a range of integers
 * @min: value of index 0
 * @max: value of last index
 *
 * Return: pointer to newly allocated memory
 */
int *array_range(int min, int max)
{
	int *arr, x, m;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (x = 0, m = min; m <= max; x++, m++)
		arr[x] = m;
	return (arr);
}
