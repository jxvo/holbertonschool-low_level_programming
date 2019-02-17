#include "holberton.h"

/**
 * print_square - prints squares made out of '#'
 * @size: determines L and W of square
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
