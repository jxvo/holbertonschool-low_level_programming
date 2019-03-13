#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of array
 * @array: array of integers
 * @size: number of elements in array
 * @action: function to execute on array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		(*action)(array[x]);
	}
}
