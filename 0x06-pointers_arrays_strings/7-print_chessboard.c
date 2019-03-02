#include "holberton.h"

/**
 * print_chessboard - prints an 8x8 chessboard out of a 2D-array
 * @a: array to print
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}
}
