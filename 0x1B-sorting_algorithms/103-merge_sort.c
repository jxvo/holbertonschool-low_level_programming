#include "sort.h"

/**
 * merge_sort - sort an array of ints in ascending order (merge sort)
 * @array: array of integers
 * @size: number of elements in @array
 *
 * Description: implementation of the top-down merge sort algoritm
 * Return: nothing!
 */
void merge_sort(int *array, size_t size)
{
	int *temp;
	size_t idx;

	if (!array || size < 2)
		return;

	temp = malloc(size * sizeof(int));
	if (!temp)
		return;

	for (idx = 0; idx < size; idx++)
		temp[idx] = array[idx];

	mergeSort(array, temp, size, 0, size - 1);
	free(temp);
}

/**
 * mergeSort - recursive top-down MergeSort algorithm implementation
 * @array: array of integers
 * @temp: duplicate of @array
 * @size: number of elements in @array
 * @beg: starting index
 * @end: ending index
 *
 * Return: nothing!
 */
void mergeSort(int *array, int *temp, size_t size, size_t beg, size_t end)
{
	size_t mid;

	if (end - beg < 1)
		return;

	mid = end - (end - beg) / 2 - 1;

	mergeSort(array, temp, size, beg, mid);
	mergeSort(array, temp, size, mid + 1, end);

	printf("Merging...\n[left]: ");
	print_array(temp + beg, mid - beg + 1);

	printf("[right]: ");
	print_array(temp + mid + 1, end - mid);

	merge(array, temp, beg, mid, end);

	printf("[Done]: ");
	print_array(temp + beg, end - beg + 1);
}

/**
 * merge - merges the array in sorted order
 * @array: array of integers
 * @temp: duplicate of @array
 * @beg: beginning index of @array
 * @mid: middle index of @array
 * @end: ending index of @array
 *
 * Return: nothing!
 */
void merge(int *array, int *temp, size_t beg, size_t mid, size_t end)
{
	size_t idx = beg, jdx = mid + 1;

	while (idx <= mid || jdx <= end)
	{
		if (jdx > end || (idx <= mid && temp[idx] <= temp[jdx]))
		{
			array[idx + jdx - mid - 1] = temp[idx];
			idx++;
		}
		else if (idx > mid || (jdx <= end && temp[jdx] < temp[idx]))
		{
			array[idx + jdx - mid - 1] = temp[jdx];
			jdx++;
		}
	}

	for (idx = beg; idx <= end; idx++)
		temp[idx] = array[idx];
}
