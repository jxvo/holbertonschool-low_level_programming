#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers, followed by '\n'
 * @a: array to be printed
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	while (n--)
	{
		printf("%d", *a++);
		if (n > 0)
			printf(", ");
	}
	putchar('\n');
}
