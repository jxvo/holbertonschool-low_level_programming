#include "holberton.h"

/**
 * print_line - draws a stright line in the terminal
 * @n: number of times to print '_'
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
