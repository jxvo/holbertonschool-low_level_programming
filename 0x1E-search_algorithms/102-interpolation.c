#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search to find a specified value
 * @array: a pointer to the beginning of the array to be searched
 * @size: size of the array to be searched
 * @value: the value to be searched for
 * Return: the index of the value being searched
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (!array)
		return (-1);
	else if (low == high)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		if (array[high] == value)
			return (high);
		else
			return (-1);
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] == value)
			return (pos);
	}
	if (array[low] == value)
		return (low);
	else if (array[high] == value)
		return (high);
	else if (array[low] > value || array[high] < value)
		printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
