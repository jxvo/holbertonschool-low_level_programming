#include "sort.h"

/**
 * bubble_sort - sort an array of integers (bubble sort algorithm)
 * @array: int array of integers
 * @size: size_t size of array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, xdi;

	if (!array)
		return;

	for (xdi = 0; xdi < size - 1; xdi++)
	{
		for (idx = 0; idx < size - xdi - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap(&array[idx], &array[idx +1]);
				print_array(array, size);
			}
		}
	}
}