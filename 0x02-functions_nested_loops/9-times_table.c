#include "holberton.h"

/**
 * times_table - prints a formatted 9 times table
 * Return: void
 */

void times_table(void)
{
	int x, y, r;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			r = x * y;
			if (x > 0)
			{
				if (r > 9)
				{
					_putchar((r / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar((r % 10) + '0');
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
