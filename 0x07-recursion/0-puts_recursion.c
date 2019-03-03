#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by '\n' recursively
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
