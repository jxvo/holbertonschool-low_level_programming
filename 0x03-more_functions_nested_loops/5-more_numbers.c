#include "holberton.h"

/**
 * more_numbers - prints the numbers (0-14) ten times
 * Return: void
 */

void more_numbers(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
