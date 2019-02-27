#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0, n--; x < n; x++, n--)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
