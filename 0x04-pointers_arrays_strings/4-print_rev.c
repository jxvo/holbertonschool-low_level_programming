#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	char *r;

	for (r = s; *r; r++)
		;
	for (r--; r >= s; r--)
	{
		_putchar(*r);
	}
	_putchar('\n');
}
