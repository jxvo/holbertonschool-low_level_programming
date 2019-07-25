#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {98, 95, 92, 91, 87, 84, 79, 68, 62, 47, 41, 39, 34, 32, 31, 22, 21, 20, 2, 1};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	shell_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
