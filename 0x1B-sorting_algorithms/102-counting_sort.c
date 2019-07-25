#include "sort.h"

/**
 * counting_sort - sorts an array of ints in ascending order (counting sort)
 * @array: array of integers
 * @size: number of elements in array
 *
 * Return: nothing!
 */
void counting_sort(int *array, size_t size)
{
	size_t xdi, idx;
	int max_val, *arr_count;

	if (array == NULL || size < 2)
		return;

	max_val = array[0];
	for (idx = 0; idx < size; idx++)
		if (array[idx] > max_val)
			max_val = array[idx];
	max_val++;

	arr_count = malloc(sizeof(int) * max_val);
	if (!arr_count)
		return;

	for (idx = 0; arr_count[idx]; idx++)
		arr_count[idx] = 0;

	for (idx = 0; idx < size; idx++)
		arr_count[array[idx]]++;

	for (idx = 1; idx < (size_t)max_val; idx++)
		arr_count[idx] += arr_count[idx - 1];

	print_array(arr_count, max_val);

	for (idx = max_val - 1; idx > 0; idx--)
		arr_count[idx] -= arr_count[idx - 1];

	for (idx = 0, xdi = 0; idx < size; xdi++)
	{
		while (arr_count[xdi] > 0)
		{
			array[idx] = xdi;
			arr_count[xdi]--;
			idx++;
		}
	}
	free(arr_count);
}
