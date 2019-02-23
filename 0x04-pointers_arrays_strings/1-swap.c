#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer to swap with b
 * @b: integer to swap with a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
