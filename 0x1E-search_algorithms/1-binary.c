#include "search_algos.h"

/**
 * print_part - Prints a partition of an array
 * @first: start element
 * @last: end element
 *
 * Return: void
 */
void print_part(int const *first, int const *last)
{
	printf("Searching in array: ");
	while (first < last)
	{
		printf("%d", *first);
		if (first < last - 1)
			printf(", ");
		else
			printf("\n");
		first++;
	}
}

/**
 * binary_search - find an element using binary search
 * @array: Array to search through
 * @size: Size of the array
 * @value: Element to search for
 *
 * Return: Index of found element || -1 (Fail)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first, middle, last;

	first = 0;
	middle = (size - 1) / 2;
	last = size;
	while (last > first)
	{
		print_part(array + first, array + last);
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
		{
			last = middle;
			middle = first + (last - first - 1) / 2;
		}
		else
		{
			first = middle + 1;
			middle = first + (last - first - 1) / 2;
		}
	}
	return (-1);
}
