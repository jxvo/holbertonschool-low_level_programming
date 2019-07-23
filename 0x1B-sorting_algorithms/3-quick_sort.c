#include "sort.h"

/**
 * quick_sort - sort an array of ints in ascending order (QuickSort)
 * @array: array of integers
 * @size: size of array
 *
 * Description: implementing Lomuto parittion scheme
 * Return: nothing!
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicker_sort(array, 0, size - 1);
}

/**
 * quicker_sort - does the actual recursive QuickSort
 * @array: array of integers
 * @lo: first index of array
 * @hi: last index of array
 *
 * Return: nothing!
 */
void quicker_sort(int *array, int lo, int hi)
{
	int idx;

	if (lo < hi)
	{
		idx = partition(array, lo, hi);
		quicker_sort(array, lo, idx - 1);
		quicker_sort(array, idx + 1, hi);
	}
}
/**
 * partition - partition through an array of integers LOMUTO STYLE
 * @array: array of integers
 * @lo: first index of array
 * @hi: last index of array
 *
 * Description: all values must be accurate
 * Return: new index position
 */
int partition(int *array, int lo, int hi)
{
	int pivot = array[hi], idx = lo - 1, xdi;
	size_t size = 0;

	while (array[size])
		size++;

	for (xdi = lo; xdi < hi; xdi++)
	{
		if (array[xdi] <= pivot)
		{
			idx++;
			if (idx != xdi)
			{
				swap(&array[idx], &array[xdi]);
				print_array(array, size);
			}
		}
	}
	if (pivot < array[idx + 1])
	{
		swap(&array[idx + 1], &array[hi]);
		print_array(array, size);
	}
	return (idx + 1);
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
