#include "sort.h"

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
