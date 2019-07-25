#include "sort.h"

/**
 * shell_sort - sorts an array of ints in ascending order (shell sort)
 * @array: array of integers
 * @size: size of array
 *
 * Description: Knuth sequence n * 3 + 1
 * Return: nothing!
 */
void shell_sort(int *array, size_t size)
{
	size_t xdi, idx, gap = 1;
	int temp, flag;

	if (!array || size < 1)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;
	for (; gap > 0; gap = gap / 3)
	{
		flag = 0;
		for (xdi = gap; xdi < size; xdi++)
		{
			temp = array[xdi];
			idx = xdi;
			while (idx >= gap && array[idx - gap] > array[xdi])
			{
				array[idx] = array[idx - gap];
				idx -= gap;
			}
			array[idx] = temp;
			flag = 1;
		}
		if (flag == 1)
			print_array(array, size);
	}
}
