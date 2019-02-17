#include "holberton.h"

/**
 * print_triangle - prints right-aligned triangle made out of '#'
 * @size: determines L and W of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = y + 1; x < size; x++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= y; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
