#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a compare function
 * @array: array to iterate through
 * @size: number of elements in array
 * @cmp: compare function to execute on each element
 *
 * Return: index of first element where cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]) != 0)
			return (x);
	}
	return (-1);
}
