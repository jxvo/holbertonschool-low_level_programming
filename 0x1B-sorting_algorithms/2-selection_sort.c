#include "sort.h"

/**
 * selection_sort - sort an array of ints in ascending order (selection sort)
 * @array: array of integers
 * @size: size of array
 *
 * Return: nothing!
 */
void selection_sort(int *array, size_t size)
{
	size_t idx, xdi, idx_min;

	if (!array)
		return;
	for (xdi = 0; xdi < size - 1; xdi++)
	{
		idx_min = xdi;
		for (idx = xdi + 1; idx < size; idx++)
		{
			if (array[idx] < array[idx_min])
				idx_min = idx;
		}
		if (idx_min != xdi)
		{
			swap(&array[idx_min], &array[xdi]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps the address values of two pointers
 * @ptr_a: pointer to integer
 * @ptr_b: pointer to integer
 *
 * Return: nothing!
 */
void swap(int *ptr_a, int *ptr_b)
{
	int tmp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = tmp;
}
