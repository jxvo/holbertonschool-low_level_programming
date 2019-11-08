#include <math.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * jump_search - find an element using jump search
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: element to search for
 * Return: index of element || -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t gap, idx;

	if (size == 0 || (size == 1 && array[0] != value))
		return (-1);
	gap = sqrt(size);
	for (idx = 0; idx < size; idx += gap)
	{
		if (array[idx] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
	}
	if (idx == 0)
		return (-1);
	idx -= gap;
	gap = idx + gap;
	printf("Value found between idxes [%lu] and [%lu]\n", idx, gap);
	while (idx < size && idx <= gap)
	{
		if (array[idx] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
			return (idx);
		}
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx++;
	}
	return (-1);
}
