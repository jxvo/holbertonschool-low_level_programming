#include "sort.h"

/**
 * shell_sort - sorts an array of ints in ascending order (shell sort)
 * @array: array of integers
 * @size: size of array
 *
 * Return: nothing!
 */
void shell_sort(int *array, size_t size)
{
	size_t xdi, idx, gap = 1;

	if (!array || size < 1)
		return;
	while (gap < size / 3)
		gap = gap * 3 + 1;
	while (gap > 0)
	{
		for (xdi = gap; xdi < size; xdi += gap)
		{
			idx = xdi;
			while (idx > 0 && array[idx] < array[idx - gap])
			{
				swap(&array[idx], &array[idx - gap]);
				idx -= gap;
			}
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
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
