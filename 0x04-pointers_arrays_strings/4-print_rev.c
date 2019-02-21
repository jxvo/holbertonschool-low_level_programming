#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	for (; *s != '\0'; s++)
		;
	s--;
	for (; *s >= 0; s--)
		_putchar(*s);
	_putchar('\n');
}
