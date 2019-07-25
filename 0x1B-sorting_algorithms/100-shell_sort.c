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
	int storage, flag;
	size_t idx, count, jump;

	if (array == NULL || size < 1)
		return;
	for (jump = 1; jump < size / 3; jump = jump * 3 + 1)
	{
	}
	for (; jump > 0; jump = jump / 3)
	{
		flag = 0;
		for (idx = jump; idx < size; idx++)
		{
			storage = array[idx];
			for (count = idx; count >= jump
				     && array[count - jump] > storage; count -= jump)
			{
				array[count] = array[count - jump];
			}
			array[count] = storage;
			flag = 1;
		}
		if (flag == 1)
			print_array(array, size);
	}

}
